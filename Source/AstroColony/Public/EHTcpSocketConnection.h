#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TcpSocketConnectDelegateDelegate.h"
#include "TcpSocketDisconnectDelegateDelegate.h"
#include "TcpSocketReceivedMessageDelegateDelegate.h"
#include "EHTcpSocketConnection.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHTcpSocketConnection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SendBufferSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReceiveBufferSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenTicks;
    
    UEHTcpSocketConnection();
    UFUNCTION(BlueprintCallable)
    bool SendData(int32 ConnectionId, TArray<uint8> DataToSend);
    
    UFUNCTION(BlueprintCallable)
    static FString Message_ReadString(UPARAM(Ref) TArray<uint8>& Message, int32 StringLength);
    
    UFUNCTION(BlueprintCallable)
    static int32 Message_ReadInt(UPARAM(Ref) TArray<uint8>& Message);
    
    UFUNCTION(BlueprintCallable)
    static float Message_ReadFloat(UPARAM(Ref) TArray<uint8>& Message);
    
    UFUNCTION(BlueprintCallable)
    static bool Message_ReadBytes(int32 NumBytes, UPARAM(Ref) TArray<uint8>& Message, TArray<uint8>& ReturnArray);
    
    UFUNCTION(BlueprintCallable)
    static uint8 Message_ReadByte(UPARAM(Ref) TArray<uint8>& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isConnected(int32 ConnectionId);
    
    UFUNCTION(BlueprintCallable)
    void Disconnect(int32 ConnectionId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<uint8> Conv_StringToBytes(const FString& InStr);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<uint8> Conv_IntToBytes(int32 inInt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<uint8> Conv_FloatToBytes(float InFloat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<uint8> Conv_ByteToBytes(uint8 InByte);
    
    UFUNCTION(BlueprintCallable)
    void Connect(const FString& ipAddress, int32 Port, const FTcpSocketDisconnectDelegate& OnDisconnected, const FTcpSocketConnectDelegate& OnConnected, const FTcpSocketReceivedMessageDelegate& OnMessageReceived, int32& ConnectionId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<uint8> Concat_BytesBytes(TArray<uint8> A, TArray<uint8> B);
    
};


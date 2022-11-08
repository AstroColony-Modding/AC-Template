#include "EHTcpSocketConnection.h"

bool UEHTcpSocketConnection::SendData(int32 ConnectionId, TArray<uint8> DataToSend) {
    return false;
}

FString UEHTcpSocketConnection::Message_ReadString(TArray<uint8>& Message, int32 StringLength) {
    return TEXT("");
}

int32 UEHTcpSocketConnection::Message_ReadInt(TArray<uint8>& Message) {
    return 0;
}

float UEHTcpSocketConnection::Message_ReadFloat(TArray<uint8>& Message) {
    return 0.0f;
}

bool UEHTcpSocketConnection::Message_ReadBytes(int32 NumBytes, TArray<uint8>& Message, TArray<uint8>& ReturnArray) {
    return false;
}

uint8 UEHTcpSocketConnection::Message_ReadByte(TArray<uint8>& Message) {
    return 0;
}

bool UEHTcpSocketConnection::isConnected(int32 ConnectionId) {
    return false;
}

void UEHTcpSocketConnection::Disconnect(int32 ConnectionId) {
}

TArray<uint8> UEHTcpSocketConnection::Conv_StringToBytes(const FString& InStr) {
    return TArray<uint8>();
}

TArray<uint8> UEHTcpSocketConnection::Conv_IntToBytes(int32 inInt) {
    return TArray<uint8>();
}

TArray<uint8> UEHTcpSocketConnection::Conv_FloatToBytes(float InFloat) {
    return TArray<uint8>();
}

TArray<uint8> UEHTcpSocketConnection::Conv_ByteToBytes(uint8 InByte) {
    return TArray<uint8>();
}

void UEHTcpSocketConnection::Connect(const FString& ipAddress, int32 Port, const FTcpSocketDisconnectDelegate& OnDisconnected, const FTcpSocketConnectDelegate& OnConnected, const FTcpSocketReceivedMessageDelegate& OnMessageReceived, int32& ConnectionId) {
}

TArray<uint8> UEHTcpSocketConnection::Concat_BytesBytes(TArray<uint8> A, TArray<uint8> B) {
    return TArray<uint8>();
}

UEHTcpSocketConnection::UEHTcpSocketConnection() {
    this->SendBufferSize = 16384;
    this->ReceiveBufferSize = 16384;
    this->TimeBetweenTicks = 0.01f;
}


#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SimplexNoiseLibrary.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API USimplexNoiseLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USimplexNoiseLibrary();
    UFUNCTION(BlueprintCallable)
    static float SimplexNoiseScaled4D(float X, float Y, float Z, float W, float S);
    
    UFUNCTION(BlueprintCallable)
    static float SimplexNoiseScaled3D(float X, float Y, float Z, float S);
    
    UFUNCTION(BlueprintCallable)
    static float SimplexNoiseScaled2D(float X, float Y, float S);
    
    UFUNCTION(BlueprintCallable)
    static float SimplexNoiseScaled1D(float X, float S);
    
    UFUNCTION(BlueprintCallable)
    static float SimplexNoiseInRange4D(float X, float Y, float Z, float W, float RangeMin, float RangeMax);
    
    UFUNCTION(BlueprintCallable)
    static float SimplexNoiseInRange3D(float X, float Y, float Z, float RangeMin, float RangeMax);
    
    UFUNCTION(BlueprintCallable)
    static float SimplexNoiseInRange2D(float X, float Y, float RangeMin, float RangeMax);
    
    UFUNCTION(BlueprintCallable)
    static float SimplexNoiseInRange1D(float X, float RangeMin, float RangeMax);
    
    UFUNCTION(BlueprintCallable)
    static float SimplexNoise4D(float X, float Y, float Z, float W);
    
    UFUNCTION(BlueprintCallable)
    static float SimplexNoise3D(float X, float Y, float Z);
    
    UFUNCTION(BlueprintCallable)
    static float SimplexNoise2D(float X, float Y);
    
    UFUNCTION(BlueprintCallable)
    static float SimplexNoise1D(float X);
    
    UFUNCTION(BlueprintCallable)
    static void setNoiseSeed(const int32& newSeed);
    
};


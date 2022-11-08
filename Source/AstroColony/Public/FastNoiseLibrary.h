#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FastNoiseLibrary.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UFastNoiseLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFastNoiseLibrary();
    UFUNCTION(BlueprintCallable)
    static float GetSimplexNoise_3D(float X, float Y, float Z, float Frequency);
    
    UFUNCTION(BlueprintCallable)
    static float GetSimplexNoise_2D(float X, float Y, float Frequency);
    
    UFUNCTION(BlueprintCallable)
    static float GetPerlinNoise_3D(float X, float Y, float Z, float Frequency);
    
    UFUNCTION(BlueprintCallable)
    static float GetFast3DNoise(float X, float Y, float Z);
    
    UFUNCTION(BlueprintCallable)
    static float GetFast2DNoise(float X, float Y);
    
};


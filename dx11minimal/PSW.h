Texture2D shadowMap : register(t0);
SamplerState shadowSampler : register(s0);

struct VS_OUT
{
    float4 pos : SV_POSITION;
    float2 uv : TEXCOORD0;
};

float4 PS(VS_OUT input) : SV_TARGET
{
    float depth = shadowMap.SampleLevel(shadowSampler, input.uv, 0).r;
    return float4(depth.xxx, 1);
}

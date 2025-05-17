Texture2D shadowMap : register(t0);
SamplerState samp : register(s0);

struct VS_OUTPUT
{
    float4 pos : SV_POSITION;
    float2 uv : TEXCOORD0;
};

float4 PS(VS_OUTPUT input) : SV_Target
{
    return float4(shadowMap.SampleLevel(samp, input.uv,0).rgb,1);

}
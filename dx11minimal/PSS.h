

struct VS_OUTPUT
{
    float4 pos : SV_POSITION;
    float4 vpos : POSITION0;
    float4 wpos : POSITION1;
    float4 lpos : TEXCOORD0;
    float3 normal : NORMAL;
};

float4 PS(VS_OUTPUT input) : SV_Target
{
    return 0;
}
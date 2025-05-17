

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
    float depth = input.pos.y;
    return float4(depth, depth, depth,1);
}
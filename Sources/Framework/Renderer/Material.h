#pragma once

struct Material
{
	Material();

	XMFLOAT4 ambient;
	XMFLOAT4 diffuse;
	XMFLOAT4 specular; // w = specular power
	XMFLOAT4 reflect;
};
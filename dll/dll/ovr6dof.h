
#ifndef OVR6DOF
#define OVR6DOF
#include<iostream>

typedef struct ovr6dof
{
	float yaw, pitch, roll, x, y, z = 0;
} ovr6dof;

__declspec(dllexport) int ovr_init();
__declspec(dllexport) int ovr_read(ovr6dof *output);
__declspec(dllexport) void ovr_center_view();
__declspec(dllexport) int ovr_destroy();

#endif 
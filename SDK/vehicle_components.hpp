#pragma once
#include "types.hpp"
#include "Server/Components/Vehicles/vehicles.hpp"

const StaticArray<VehicleComponentSlot, MAX_VEHICLE_COMPONENTS> allComponentSlots =
{
	VehicleComponent_Spoiler,
	VehicleComponent_Spoiler,
	VehicleComponent_Spoiler,
	VehicleComponent_Spoiler,
	VehicleComponent_Hood,
	VehicleComponent_Hood,
	VehicleComponent_Roof,
	VehicleComponent_SideSkirt,
	VehicleComponent_Nitro,
	VehicleComponent_Nitro,
	VehicleComponent_Nitro,
	VehicleComponent_Hood,
	VehicleComponent_Hood,
	VehicleComponent_Lamps,
	VehicleComponent_Spoiler,
	VehicleComponent_Spoiler,
	VehicleComponent_Spoiler,
	VehicleComponent_SideSkirt,
	VehicleComponent_Exhaust,
	VehicleComponent_Exhaust,
	VehicleComponent_Exhaust,
	VehicleComponent_Exhaust,
	VehicleComponent_Exhaust,
	VehicleComponent_Spoiler,
	VehicleComponent_Lamps,
	VehicleComponent_Wheels,
	VehicleComponent_SideSkirt,
	VehicleComponent_SideSkirt,
	VehicleComponent_Exhaust,
	VehicleComponent_Exhaust,
	VehicleComponent_SideSkirt,
	VehicleComponent_SideSkirt,
	VehicleComponent_Roof,
	VehicleComponent_Roof,
	VehicleComponent_Exhaust,
	VehicleComponent_Roof,
	VehicleComponent_SideSkirt,
	VehicleComponent_Exhaust,
	VehicleComponent_Roof,
	VehicleComponent_SideSkirt,
	VehicleComponent_SideSkirt,
	VehicleComponent_SideSkirt,
	VehicleComponent_SideSkirt,
	VehicleComponent_Exhaust,
	VehicleComponent_Exhaust,
	VehicleComponent_Exhaust,
	VehicleComponent_Exhaust,
	VehicleComponent_SideSkirt,
	VehicleComponent_SideSkirt,
	VehicleComponent_Spoiler,
	VehicleComponent_Spoiler,
	VehicleComponent_SideSkirt,
	VehicleComponent_SideSkirt,
	VehicleComponent_Roof,
	VehicleComponent_Roof,
	VehicleComponent_Roof,
	VehicleComponent_SideSkirt,
	VehicleComponent_SideSkirt,
	VehicleComponent_Spoiler,
	VehicleComponent_Exhaust,
	VehicleComponent_Spoiler,
	VehicleComponent_Roof,
	VehicleComponent_SideSkirt,
	VehicleComponent_SideSkirt,
	VehicleComponent_Exhaust,
	VehicleComponent_Exhaust,
	VehicleComponent_Exhaust,
	VehicleComponent_Roof,
	VehicleComponent_Roof,
	VehicleComponent_SideSkirt,
	VehicleComponent_SideSkirt,
	VehicleComponent_SideSkirt,
	VehicleComponent_SideSkirt,
	VehicleComponent_Wheels,
	VehicleComponent_Wheels,
	VehicleComponent_Wheels,
	VehicleComponent_Wheels,
	VehicleComponent_Wheels,
	VehicleComponent_Wheels,
	VehicleComponent_Wheels,
	VehicleComponent_Wheels,
	VehicleComponent_Wheels,
	VehicleComponent_Wheels,
	VehicleComponent_Wheels,
	VehicleComponent_Wheels,
	VehicleComponent_Wheels,
	VehicleComponent_Stereo,
	VehicleComponent_Hydraulics,
	VehicleComponent_Roof,
	VehicleComponent_Exhaust,
	VehicleComponent_SideSkirt,
	VehicleComponent_Roof,
	VehicleComponent_Exhaust,
	VehicleComponent_SideSkirt,
	VehicleComponent_SideSkirt,
	VehicleComponent_SideSkirt,
	VehicleComponent_Wheels,
	VehicleComponent_Wheels,
	VehicleComponent_Wheels,
	VehicleComponent_SideSkirt,
	VehicleComponent_FrontBumper,
	VehicleComponent_SideSkirt,
	VehicleComponent_SideSkirt,
	VehicleComponent_Roof,
	VehicleComponent_Exhaust,
	VehicleComponent_Exhaust,
	VehicleComponent_SideSkirt,
	VehicleComponent_SideSkirt,
	VehicleComponent_SideSkirt,
	VehicleComponent_FrontBumper,
	VehicleComponent_FrontBumper,
	VehicleComponent_FrontBumper,
	VehicleComponent_FrontBumper,
	VehicleComponent_Exhaust,
	VehicleComponent_Exhaust,
	VehicleComponent_FrontBumper,
	VehicleComponent_FrontBumper,
	VehicleComponent_FrontBumper,
	VehicleComponent_SideSkirt,
	VehicleComponent_SideSkirt,
	VehicleComponent_SideSkirt,
	VehicleComponent_SideSkirt,
	VehicleComponent_SideSkirt,
	VehicleComponent_FrontBumper,
	VehicleComponent_SideSkirt,
	VehicleComponent_FrontBumper,
	VehicleComponent_Exhaust,
	VehicleComponent_Exhaust,
	VehicleComponent_Roof,
	VehicleComponent_Exhaust,
	VehicleComponent_Roof,
	VehicleComponent_Roof,
	VehicleComponent_Exhaust,
	VehicleComponent_SideSkirt,
	VehicleComponent_SideSkirt,
	VehicleComponent_Exhaust,
	VehicleComponent_Exhaust,
	VehicleComponent_SideSkirt,
	VehicleComponent_Spoiler,
	VehicleComponent_Spoiler,
	VehicleComponent_RearBumper,
	VehicleComponent_RearBumper,
	VehicleComponent_VentLeft,
	VehicleComponent_VentRight,
	VehicleComponent_VentLeft,
	VehicleComponent_VentRight,
	VehicleComponent_Spoiler,
	VehicleComponent_Spoiler,
	VehicleComponent_RearBumper,
	VehicleComponent_RearBumper,
	VehicleComponent_RearBumper,
	VehicleComponent_RearBumper,
	VehicleComponent_FrontBumper,
	VehicleComponent_FrontBumper,
	VehicleComponent_RearBumper,
	VehicleComponent_FrontBumper,
	VehicleComponent_RearBumper,
	VehicleComponent_FrontBumper,
	VehicleComponent_Spoiler,
	VehicleComponent_RearBumper,
	VehicleComponent_FrontBumper,
	VehicleComponent_RearBumper,
	VehicleComponent_Spoiler,
	VehicleComponent_Spoiler,
	VehicleComponent_Spoiler,
	VehicleComponent_FrontBumper,
	VehicleComponent_FrontBumper,
	VehicleComponent_RearBumper,
	VehicleComponent_RearBumper,
	VehicleComponent_FrontBumper,
	VehicleComponent_FrontBumper,
	VehicleComponent_FrontBumper,
	VehicleComponent_FrontBumper,
	VehicleComponent_FrontBumper,
	VehicleComponent_FrontBumper,
	VehicleComponent_FrontBumper,
	VehicleComponent_RearBumper,
	VehicleComponent_RearBumper,
	VehicleComponent_RearBumper,
	VehicleComponent_FrontBumper,
	VehicleComponent_RearBumper,
	VehicleComponent_FrontBumper,
	VehicleComponent_FrontBumper,
	VehicleComponent_RearBumper,
	VehicleComponent_RearBumper,
	VehicleComponent_FrontBumper,
	VehicleComponent_RearBumper,
	VehicleComponent_RearBumper,
	VehicleComponent_FrontBumper,
	VehicleComponent_FrontBumper,
	VehicleComponent_FrontBumper,
	VehicleComponent_FrontBumper,
	VehicleComponent_RearBumper,
	VehicleComponent_RearBumper
};

static int getVehicleComponentSlot(int component) {
	component -= 1000;
	if (0 <= component && component < MAX_VEHICLE_COMPONENTS)
	{
		return allComponentSlots[component];
	}
	return VehicleComponent_None;
};
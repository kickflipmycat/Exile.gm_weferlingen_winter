/**
 * config
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 

class CfgClans
{
	/*
		Defines the amount of pop tabs needed to register a new clan

		Default: 20,000
	*/
	registrationFee = 20000;

	/*
		A list of all characters allowed in a clan *name*

		NOTE: 
	*/
	clanNameAlphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 ._-!\\/";

	/*

		Maximum markers per clan

	*/
	maximumIcons = 20;

	/*
		Maximum number of characters on a Marker in a presistent system

		Note: MAX 255!
		
	*/
	maximumIconText = 50;

	/*

		Maximum poly markers per clan

	*/
	maximumPolys = 10;


	/* 

		Maximum points in poly
	*/
	maximumPolyNode = 10;
};
class Exile_AbstractCraftingRecipe
{
	name = "";
	pictureItem = ""; 
	returnedItems[] = {};
	components[] = {}; // Required components
	tools[] = {}; // Required tools (matches, gas cooker etc.)
	requiredInteractionModelGroup = ""; // See CfgInteractionModels
	requiresOcean = 0; // isSurfaceWater test
	requiresFire = 0; // inflamed object nearby
	requiresConcreteMixer = 0; // Check if concrete mixer is nearby
};

class CfgCraftingRecipes
{
	
class BreachingChargeBigMomma: Exile_AbstractCraftingRecipe
{
	name = "Breaching Charge (Big Momma)";
	pictureItem = "Exile_Item_BreachingCharge_BigMomma";
	returnedItems[] =
	{
		{1, "Exile_Item_BreachingCharge_BigMomma"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{3, "Exile_Item_BreachingCharge_Metal"},
		{1, "Exile_Item_MobilePhone"},
		{1, "Exile_Item_DuctTape"},
		{1, "Exile_Item_ZipTie"}
	};
};

class BreachingChargeMetal: Exile_AbstractCraftingRecipe
{
	name = "Breaching Charge (Metal)";
	pictureItem = "Exile_Item_BreachingCharge_Metal";
	returnedItems[] =
	{
		{1, "Exile_Item_BreachingCharge_Metal"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{1, "Exile_Item_DuctTape"},
		{1, "SatchelCharge_Remote_Mag"}
	};
};

class BreachingChargeWood: Exile_AbstractCraftingRecipe
{
	name = "Breaching Charge (Wood)";
	pictureItem = "Exile_Item_BreachingCharge_Wood";
	returnedItems[] =
	{
		{1, "Exile_Item_BreachingCharge_Wood"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{1, "Exile_Item_DuctTape"},
		{1, "DemoCharge_Remote_Mag"}
	};
};

class CookBBQSandwich: Exile_AbstractCraftingRecipe
{
	name = "Cook BBQ Sandwich";
	pictureItem = "Exile_Item_BBQSandwich_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_BBQSandwich_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_BBQSandwich"}
	};
};

class CookCatFood: Exile_AbstractCraftingRecipe
{
	name = "Cook Cat Food";
	pictureItem = "Exile_Item_CatFood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_CatFood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_CatFood"}
	};
};

class CookChristmasTinner: Exile_AbstractCraftingRecipe
{
	name = "Cook Christmas Tinner";
	pictureItem = "Exile_Item_ChristmasTinner_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_ChristmasTinner_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_ChristmasTinner"}
	};
};
class CookCoffee: Exile_AbstractCraftingRecipe
{
	name = "Brew Coffee";
	pictureItem = "Exile_Item_PlasticBottleCoffee";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleCoffee"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleFreshWater"},
		{1, "Exile_Item_InstantCoffee"}
	};
};
class CookDogFood: Exile_AbstractCraftingRecipe
{
	name = "Cook Dog Food";
	pictureItem = "Exile_Item_DogFood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_DogFood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_DogFood"}
	};
};

class CookGloriousKnakworst: Exile_AbstractCraftingRecipe
{
	name = "Cook Glorious Knakworst";
	pictureItem = "Exile_Item_GloriousKnakworst_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_GloriousKnakworst_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_GloriousKnakworst"}
	};
};

class CookMacasCheese: Exile_AbstractCraftingRecipe
{
	name = "Cook Macas Cheese";
	pictureItem = "Exile_Item_MacasCheese_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_MacasCheese_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_MacasCheese"}
	};
};

class CookPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
};
class CookPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Salt Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
};

class CookSausageGravy: Exile_AbstractCraftingRecipe
{
	name = "Cook Sausage Gravy";
	pictureItem = "Exile_Item_SausageGravy_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_SausageGravy_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_SausageGravy"}
	};
};

class CookSurstromming: Exile_AbstractCraftingRecipe
{
	name = "Cook Surströmming";
	pictureItem = "Exile_Item_Surstromming_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_Surstromming_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_Surstromming"}
	};
};

class CraftBandage: Exile_AbstractCraftingRecipe
{
	name = "Craft Bandage";
	pictureItem = "Exile_Item_Bandage";
	returnedItems[] =
	{
		{1, "Exile_Item_Bandage"}
	};
	components[] = 
	{
		{4, "Exile_Item_ToiletPaper"}
	};
};

class CraftConcreteDoorway: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Doorway";
	pictureItem = "Exile_Item_ConcreteDoorwayKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteDoorwayKit"},
		{3, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{3, "Exile_Item_MetalPole"},
		{3, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteDrawbridge: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Drawbridge";
	pictureItem = "Exile_Item_ConcreteDrawBridgeKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteDrawBridgeKit"},
		{4, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{4, "Exile_Item_Cement"},
		{4, "Exile_Item_Sand"},
		{4, "Exile_Item_MetalPole"},
		{3, "Exile_Item_JunkMetal"},
		{4, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteFloor: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Floor";
	pictureItem = "Exile_Item_ConcreteFloorKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteFloorKit"},
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Floor Port";
	pictureItem = "Exile_Item_ConcreteFloorPortKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteFloorPortKit"},
		{3, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{3, "Exile_Item_MetalPole"},
		{3, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteFloorPortSmall: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Floor Port (Small)";
	pictureItem = "Exile_Item_ConcreteFloorPortSmallKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteFloorPortSmallKit"},
		{3, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{3, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"},
		{3, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteGate: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Gate";
	pictureItem = "Exile_Item_ConcreteGateKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteGateKit"},
		{4, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{4, "Exile_Item_Cement"},
		{4, "Exile_Item_Sand"},
		{4, "Exile_Item_MetalPole"},
		{4, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteLadderHatch: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Ladder Hatch";
	pictureItem = "Exile_Item_ConcreteLadderHatchKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteLadderHatchKit"},
		{3, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{3, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"},
		{3, "Exile_Item_JunkMetal"},
		{3, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcretStairs: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Stairs";
	pictureItem = "Exile_Item_ConcreteStairsKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteStairsKit"},
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcretSupport: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Support";
	pictureItem = "Exile_Item_ConcreteSupportKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteSupportKit"},
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteWall: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Wall";
	pictureItem = "Exile_Item_ConcreteWallKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteWallKit"},
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftFirePlace: Exile_AbstractCraftingRecipe
{
	name = "Craft Fire Place";
	pictureItem = "Exile_Item_CampFireKit";
	returnedItems[] = 
	{
		{1, "Exile_Item_CampFireKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
};
class CraftFloodLight: Exile_AbstractCraftingRecipe
{
	name = "Craft Flood Light";
	pictureItem = "Exile_Item_FloodLightKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_FloodLightKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_ExtensionCord"}
	};
};
class CraftFortificationUpgrade: Exile_AbstractCraftingRecipe
{
	name = "Craft Fortification Upgrade";
	pictureItem = "Exile_Item_MetalBoard"; //<< CHANGE IT
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_FortificationUpgrade"}
	};
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftHBarrier5Kit: Exile_AbstractCraftingRecipe
{
	name = "Craft H-barrier (5 Blocks)";
	pictureItem = "Exile_Item_HBarrier5Kit";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Pliers"
	};
	returnedItems[] = 
	{
		{1, "Exile_Item_HBarrier5Kit"}
	};
	components[] = 
	{
		{3, "Exile_Item_SandBagsKit_Long"},
		{2, "Exile_Item_MetalWire"}
	};
};
class CraftMetalBoard: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Board";
	pictureItem = "Exile_Item_MetalBoard";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalBoard"}
	};
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftMetalHedgehog: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Hedgehog";
	pictureItem = "Exile_Item_MetalHedgehogKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalHedgehogKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftMetalLadder: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Ladder";
	pictureItem = "Exile_Item_MetalLadderKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_MetalLadderKit"}
	};
	components[] =
	{
		{6, "Exile_Item_JunkMetal"}
	};
};
class CraftMetalLadderDouble: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Ladder (Double Tall)";
	pictureItem = "Exile_Item_MetalLadderDoubleKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_MetalLadderDoubleKit"}
	};
	components[] =
	{
		{2, "Exile_Item_MetalLadderKit"}
	};
};
class CraftMetalPole: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Pole";
	pictureItem = "Exile_Item_MetalPole";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalPole"}
	};
	components[] = 
	{
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftOldChest: Exile_AbstractCraftingRecipe
{
	name = "Craft Old Chest";
	pictureItem = "Exile_Item_OldChestKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_OldChestKit"}
	};
	components[] = 
	{
		{3, "Exile_Item_WoodPlank"},
		{3, "Exile_Item_JunkMetal"}
	};
};
class CraftPortableGenerator: Exile_AbstractCraftingRecipe
{
	name = "Craft Portable Generator";
	pictureItem = "Exile_Item_PortableGeneratorKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_PortableGeneratorKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_ExtensionCord"}
	};
};
/*class CraftRazorWireKit: Exile_AbstractCraftingRecipe
{
	name = "Craft Razor Wire Kit Kit";
	pictureItem = "Exile_Item_RazorWireKit_Long";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	returnedItems[] = 
	{
		{1, "Exile_Item_RazorWireKit_Long"}
	};
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
};*/
class CraftRepairKitConcrete: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Repair Kit";
	pictureItem = "Exile_Item_Cement";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_RepairKitConcrete"},
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{4, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftRepairKitMetal: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Repair Kit";
	pictureItem = "Exile_Item_RepairKitMetal";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_RepairKitMetal"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"}
	};
	tools[] = 
	{
		"Exile_Item_Foolbox",
		"Exile_Item_Grinder"
	};
};
class CraftRepairKitWood: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Repair Kit";
	pictureItem = "Exile_Item_RepairKitWood";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_RepairKitWood"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
	tools[] = 
	{
		"Exile_Item_Foolbox"
	};
};
class CraftSandBagsKitCorner: Exile_AbstractCraftingRecipe
{
	name = "Craft Sandbags Kit (Corner)";
	pictureItem = "Exile_Item_SandBagsKit_Corner";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_SandBagsKit_Corner"}
	};
	components[] = 
	{
		{3, "Exile_Item_Sand"}
	};
};
class CraftSandBagsKitLong: Exile_AbstractCraftingRecipe
{
	name = "Craft Sand Bags Kit (Long)";
	pictureItem = "Exile_Item_SandBagsKit_Long";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_SandBagsKit_Long"}
	};
	components[] = 
	{
		{6, "Exile_Item_Sand"}
	};
};
class CraftStorageCrate: Exile_AbstractCraftingRecipe
{
	name = "Craft Storage Crate";
	pictureItem = "Exile_Item_StorageCrateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_StorageCrateKit"}
	};
	components[] = 
	{
		{5, "Exile_Item_WoodPlank"}
	};
};
class CraftWaterBarrel: Exile_AbstractCraftingRecipe
{
	name = "Craft Water Barrel";
	pictureItem = "Exile_Item_WaterBarrelKit";
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_WaterBarrelKit"}
	};
	components[] = 
	{
		{20, "Exile_Item_PlasticBottleEmpty"}
	};
};
class CraftWireFenceKit: Exile_AbstractCraftingRecipe
{
	name = "Craft Wire Fence Kit";
	pictureItem = "Exile_Item_WireFenceKit";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	returnedItems[] = 
	{
		{1, "Exile_Item_WireFenceKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalPole"},
		{6, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
};
class CraftWoodDoorWay: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Doorway";
	pictureItem = "Exile_Item_WoodDoorwayKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodDrawBridge: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Draw Bridge";
	pictureItem = "Exile_Item_WoodDrawBridgeKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodDrawBridgeKit"}
	};
	components[] =
	{
		{8, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"}
	};
};
class CraftWoodFloor: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor";
	pictureItem = "Exile_Item_WoodFloorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodFloorPortSmall: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor Port (Small)";
	pictureItem = "Exile_Item_WoodFloorPortSmallKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodFloorPortSmallKit"}
	};
	components[] =
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] = 
	{
		{8, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodLadder: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Ladder";
	pictureItem = "Exile_Item_WoodLadderKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodLadderKit"}
	};
	components[] =
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodLadderHatch: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Ladder Hatch";
	pictureItem = "Exile_Item_WoodLadderHatchKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodLadderHatchKit"}
	};
	components[] =
	{
		{6, "Exile_Item_WoodPlank"},
		{3, "Exile_Item_JunkMetal"}
	};
};
class CraftWoodPlank: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Plank";
	pictureItem = "Exile_Item_WoodPlank";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodPlank"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};
class CraftWoodStairs: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Stairs";
	pictureItem = "Exile_Item_WoodStairsKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodStairsKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodSupport: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Support";
	pictureItem = "Exile_Item_WoodSupportKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodSupportKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Wall";
	pictureItem = "Exile_Item_WoodWallKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWallHalf: Exile_AbstractCraftingRecipe
{
	name = "Craft 1/2 Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallHalfKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWorkBench: Exile_AbstractCraftingRecipe
{
	name = "Craft Work Bench";
	pictureItem = "Exile_Item_WorkBenchKit";
	returnedItems[] = 
	{
		{1, "Exile_Item_WorkBenchKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodLog"}
	};
};
class CookAlsatianSteak: Exile_AbstractCraftingRecipe
{
	name = "Cook Alsatian Steak";
	pictureItem = "Exile_Item_AlsatianSteak_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_AlsatianSteak_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_AlsatianSteak_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookCatSharkFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Cat Shark Filet";
	pictureItem = "Exile_Item_CatSharkFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_CatSharkFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_CatSharkFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookChickenFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Chicken Filet";
	pictureItem = "Exile_Item_ChickenFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_ChickenFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_ChickenFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookFinSteak: Exile_AbstractCraftingRecipe
{
	name = "Cook Fin Steak";
	pictureItem = "Exile_Item_FinSteak_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_FinSteak_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_FinSteak_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookGoatSteak: Exile_AbstractCraftingRecipe
{
	name = "Cook Goat Steak";
	pictureItem = "Exile_Item_GoatSteak_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_GoatSteak_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_GoatSteak_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookMackerelFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Mackerel Filet";
	pictureItem = "Exile_Item_MackerelFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_MackerelFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_MackerelFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookMulletFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Mullet Filet";
	pictureItem = "Exile_Item_MulletFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_MulletFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_MulletFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookOrnateFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Ornate Filet";
	pictureItem = "Exile_Item_OrnateFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_OrnateFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_OrnateFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookRabbitSteak: Exile_AbstractCraftingRecipe
{
	name = "Cook Rabbit Steak";
	pictureItem = "Exile_Item_RabbitSteak_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_RabbitSteak_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_RabbitSteak_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookRoosterFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Rooster Filet";
	pictureItem = "Exile_Item_RoosterFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_RoosterFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_RoosterFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookSalemaFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Salema Filet";
	pictureItem = "Exile_Item_SalemaFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_SalemaFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_SalemaFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookSheepSteak: Exile_AbstractCraftingRecipe
{
	name = "Cook Sheep Steak";
	pictureItem = "Exile_Item_SheepSteak_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_SheepSteak_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_SheepSteak_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookSnakeFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Snake Filet";
	pictureItem = "Exile_Item_SnakeFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_SnakeFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_SnakeFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookTunaFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Tuna Filet";
	pictureItem = "Exile_Item_TunaFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_TunaFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_TunaFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookTurtleFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Turtle Filet";
	pictureItem = "Exile_Item_TurtleFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_TurtleFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_TurtleFilet_Raw"}
	};
};


class EmptyFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Empty Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterEmpty";
	returnedItems[] = 
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class EmptyPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleEmpty";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
};
class EmptyPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Salt Water";
	pictureItem = "Exile_Item_PlasticBottleEmpty";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
};
class FillEmptyPlasticBottleWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleDirtyWater";
	requiredInteractionModelGroup = "WaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyPlasticBottleWithFreshWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Fresh Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiredInteractionModelGroup = "CleanWaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyPlasticBottleWithSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Salt Water";
	pictureItem = "Exile_Item_PlasticBottleSaltWater";
	requiresOcean = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyWaterCanisterWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Dirty Water";
	pictureItem = "Exile_Item_WaterCanisterDirtyWater";
	requiredInteractionModelGroup = "WaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
};
class FillFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Fill Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterFull";
	requiredInteractionModelGroup = "FuelSource";
	returnedItems[] = 
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
	components[] = 
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
};
class UpgradeToConcreteDoor: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Door";
	pictureItem = "Exile_Item_ConcreteDoorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteDoorKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_ConcreteDoorwayKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
};
class UpgradeToConcreteFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Floor Port";
	pictureItem = "Exile_Item_ConcreteFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteFloorPortKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_ConcreteFloorKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
};
class UpgradeToConcreteGate: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Gate";
	pictureItem = "Exile_Item_ConcreteGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteGateKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_ConcreteWallKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
};
class UpgradeToConcreteWindow: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Window";
	pictureItem = "Exile_Item_ConcreteWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteWindowKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_ConcreteWallKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
};
class UpgradeToWoodDoor: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Door";
	pictureItem = "Exile_Item_WoodDoorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDoorKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodDrawBridge: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Draw Bridge";
	pictureItem = "Exile_Item_WoodDrawBridgeKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodDrawBridgeKit"}
	};
	components[] =
	{
		{1, "Exile_Item_WoodGateKit"},
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"}
	};
};
class UpgradeToWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodFloorKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{4, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodWallHalfKit"}
	};
};
class UpgradeToWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
};
class CfgExileAnimals
{
	/**
	 * Should animals spawn on your server? Y/N?
	 */
	enabled = 1;

	/**
	 * Should vanilla Arma animals (fish, rabbits, bees, etc.) be disabled?
	 * We think it should, since it might confuse players if they cant eat them. *munches on bees*
	 */
	disableVanillaAnimals = 1;

	/**
	 * Which animals to spawn. 
	 * Exile automatically spawns a color variation of that animal, if variations exist.
	 * Each player (client) has a maximum of one animal at a time.
	 * Exile checks which animal type can spawn in front of the player and then
	 * picks a random one. 
	 *
	 * For now it is like this:
	 * 
	 * - Goats spawn on hill tops, but not in forests
	 * - Sheep spawn on meadows, but not next to forests and not on hill tops
	 * - Hens and roosters spawn next to buildings only
	 *
	 * => More animal types will follow in upcoming Exile versions, hopefully.
	 */
	animalTypes[] = 
	{
		"Exile_Animal_Rooster_Abstract",
		"Exile_Animal_Hen_Abstract",
		"Exile_Animal_Goat_Abstract",
		"Exile_Animal_Sheep_Abstract"
	};

	/**
	 * Animals are always spawned in front of the player, but
	 * at least a certain distance away. The radius is applied on top.
	 *
	 * Example:
	 * Distance = 150
	 * Radius = 50
	 *
	 * => Minimum Distance from Player = 150 
	 * => Maximum Distance from Player = 150 + 50 * 2
	 */
	spawnDistance = 150;
	spawnRadius = 50;

	/**
	 * Specifies the minimum time in seconds between spawning animals.
	 * When the animal diededed, this time has to pass before it spawns
	 * a new one.
	 *
	 * It is a min/max setting, so the intervals will be uneven and a bit random.
	 * By default it will take 5 to 10 minutes to respawn a new animal.
	 */
	minimumSpawnDelay = 5 * 60;
	maximumSpawnDelay = 10 * 60;

	/**
	 * Clients will despawn animals if no player is in this radius around the animal
	 * This check is ran every 1 minute, so it is pretty unprecise, but performance-friendly. 
	 */
	keepAliveRadius = 500;

	/**
	 * Defines the minimum lifetime of an animal in seconds. During this time, right after spawning,
	 * it will not despawn. (+-0..1 minute delay)
	 */
	minimumLifetime = 5 * 60;
};
class CfgExileArsenal
{
	class Exile_Uniform_BambiOverall				{ quality = 1; price = 1; sellPrice = 1; };

	/*///////////////////////////////////////////////////////////////////////////////
	// Civillian Clothing
	///////////////////////////////////////////////////////////////////////////////
	class U_C_Journalist 							{ quality = 1; price = 20; };
	class U_C_Poloshirt_blue 						{ quality = 1; price = 20; };
	class U_C_Poloshirt_burgundy 					{ quality = 1; price = 20; };
	class U_C_Poloshirt_salmon 						{ quality = 1; price = 20; };
	class U_C_Poloshirt_stripped 					{ quality = 1; price = 20; };
	class U_C_Poloshirt_tricolour 					{ quality = 1; price = 20; };
	class U_C_Poor_1 								{ quality = 1; price = 20; };
	class U_C_Poor_2 								{ quality = 1; price = 20; };
	class U_C_Poor_shorts_1 						{ quality = 1; price = 20; };
	class U_C_Scientist 							{ quality = 1; price = 20; };
	class U_OrestesBody 							{ quality = 1; price = 40; };
	class U_Rangemaster 							{ quality = 1; price = 40; };
	class U_NikosAgedBody 							{ quality = 1; price = 40; };
	class U_NikosBody 								{ quality = 1; price = 40; };
	class U_Competitor 								{ quality = 1; price = 40; };

	///////////////////////////////////////////////////////////////////////////////
	// Soldier Uniforms
	///////////////////////////////////////////////////////////////////////////////
	class U_B_CombatUniform_mcam 					{ quality = 1; price = 40; };
	class U_B_CombatUniform_mcam_tshirt 			{ quality = 1; price = 40; };
	class U_B_CombatUniform_mcam_vest 				{ quality = 1; price = 40; };
	class U_B_CombatUniform_mcam_worn 				{ quality = 1; price = 40; };
	class U_B_CTRG_1 								{ quality = 1; price = 40; };
	class U_B_CTRG_2 								{ quality = 1; price = 40; };
	class U_B_CTRG_3								{ quality = 1; price = 40; };
	class U_I_CombatUniform 						{ quality = 1; price = 40; };
	class U_I_CombatUniform_shortsleeve				{ quality = 1; price = 40; };
	class U_I_CombatUniform_tshirt					{ quality = 1; price = 40; };
	class U_I_OfficerUniform						{ quality = 1; price = 40; };
	class U_O_CombatUniform_ocamo 					{ quality = 1; price = 40; };
	class U_O_CombatUniform_oucamo 					{ quality = 1; price = 40; };
	class U_O_OfficerUniform_ocamo 					{ quality = 1; price = 80; };
	class U_B_SpecopsUniform_sgg 					{ quality = 1; price = 80; };
	class U_O_SpecopsUniform_blk 					{ quality = 1; price = 80; };
	class U_O_SpecopsUniform_ocamo 					{ quality = 1; price = 80; };
	class U_I_G_Story_Protagonist_F 				{ quality = 1; price = 100; };
	class Exile_Uniform_Woodland 					{ quality = 1; price = 150; };

	///////////////////////////////////////////////////////////////////////////////
	// Guerilla Uniforms
	///////////////////////////////////////////////////////////////////////////////
	class U_C_HunterBody_grn						{ quality = 1; price = 40; };
	class U_IG_Guerilla1_1							{ quality = 1; price = 40; };
	class U_IG_Guerilla2_1							{ quality = 1; price = 60; };
	class U_IG_Guerilla2_2							{ quality = 1; price = 40; };
	class U_IG_Guerilla2_3							{ quality = 1; price = 40; };
	class U_IG_Guerilla3_1							{ quality = 1; price = 40; };
	class U_BG_Guerilla2_1							{ quality = 1; price = 40; };
	class U_IG_Guerilla3_2							{ quality = 1; price = 40; };
	class U_BG_Guerrilla_6_1						{ quality = 1; price = 60; };
	class U_BG_Guerilla1_1							{ quality = 1; price = 40; };
	class U_BG_Guerilla2_2							{ quality = 1; price = 40; };
	class U_BG_Guerilla2_3							{ quality = 1; price = 40; };
	class U_BG_Guerilla3_1							{ quality = 1; price = 40; };
	class U_BG_leader								{ quality = 1; price = 40; };
	class U_IG_leader								{ quality = 1; price = 40; };
	class U_I_G_resistanceLeader_F					{ quality = 1; price = 100; };

	///////////////////////////////////////////////////////////////////////////////
	// Ghillie Suits
	///////////////////////////////////////////////////////////////////////////////
	class U_B_FullGhillie_ard						{ quality = 1; price = 150; };
	class U_B_FullGhillie_lsh						{ quality = 1; price = 150; };
	class U_B_FullGhillie_sard						{ quality = 1; price = 150; };
	class U_B_GhillieSuit							{ quality = 1; price = 100; };
	class U_I_FullGhillie_ard						{ quality = 1; price = 150; };
	class U_I_FullGhillie_lsh						{ quality = 1; price = 150; };
	class U_I_FullGhillie_sard						{ quality = 1; price = 150; };
	class U_I_GhillieSuit							{ quality = 1; price = 100; };
	class U_O_FullGhillie_ard						{ quality = 1; price = 150; };
	class U_O_FullGhillie_lsh						{ quality = 1; price = 150; };
	class U_O_FullGhillie_sard						{ quality = 1; price = 150; };
	class U_O_GhillieSuit							{ quality = 1; price = 100; };

	///////////////////////////////////////////////////////////////////////////////
	// Wet Suits
	///////////////////////////////////////////////////////////////////////////////
	class U_I_Wetsuit								{ quality = 1; price = 80; };
	class U_O_Wetsuit								{ quality = 1; price = 80; };
	class U_B_Wetsuit								{ quality = 1; price = 80; };
	class U_B_survival_uniform						{ quality = 1; price = 80; };

	///////////////////////////////////////////////////////////////////////////////
	// Bandolliers
	///////////////////////////////////////////////////////////////////////////////
	class V_BandollierB_blk							{ quality = 1; price = 20; };
	class V_BandollierB_cbr							{ quality = 1; price = 20; };
	class V_BandollierB_khk							{ quality = 1; price = 20; };
	class V_BandollierB_oli							{ quality = 1; price = 20; };
	class V_BandollierB_rgr							{ quality = 1; price = 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Chestrigs
	///////////////////////////////////////////////////////////////////////////////
	class V_Chestrig_blk 							{ quality = 1; price = 30; };
	class V_Chestrig_khk 							{ quality = 1; price = 30; };
	class V_Chestrig_oli 							{ quality = 1; price = 30; };
	class V_Chestrig_rgr 							{ quality = 1; price = 30; };

	///////////////////////////////////////////////////////////////////////////////
	// Vests
	///////////////////////////////////////////////////////////////////////////////
	class V_Press_F									{ quality = 1; price = 10; };
	class V_Rangemaster_belt						{ quality = 1; price = 6; };
	class V_TacVest_blk								{ quality = 1; price = 50; };
	class V_TacVest_blk_POLICE						{ quality = 1; price = 50; };
	class V_TacVest_brn								{ quality = 1; price = 50; };
	class V_TacVest_camo							{ quality = 1; price = 50; };
	class V_TacVest_khk								{ quality = 1; price = 50; };
	class V_TacVest_oli								{ quality = 1; price = 50; };
	class V_TacVestCamo_khk							{ quality = 1; price = 50; };
	class V_TacVestIR_blk							{ quality = 1; price = 50; };
	class V_I_G_resistanceLeader_F					{ quality = 1; price = 50; };

	///////////////////////////////////////////////////////////////////////////////
	// Harnesses
	///////////////////////////////////////////////////////////////////////////////
	class V_HarnessO_brn							{ quality = 1; price = 40; };
	class V_HarnessO_gry							{ quality = 1; price = 40; };
	class V_HarnessOGL_brn							{ quality = 1; price = 30; };
	class V_HarnessOGL_gry							{ quality = 1; price = 30; };
	class V_HarnessOSpec_brn						{ quality = 1; price = 40; };
	class V_HarnessOSpec_gry						{ quality = 1; price = 40; };

	///////////////////////////////////////////////////////////////////////////////
	// Plate Carriers
	///////////////////////////////////////////////////////////////////////////////
	class V_PlateCarrier1_blk 						{ quality = 1; price = 80; };
	class V_PlateCarrier1_rgr 						{ quality = 1; price = 80; };
	class V_PlateCarrier2_rgr 						{ quality = 1; price = 100; };
	class V_PlateCarrier3_rgr 						{ quality = 1; price = 100; };
	class V_PlateCarrierGL_blk 						{ quality = 1; price = 500; };
	class V_PlateCarrierGL_mtp 						{ quality = 1; price = 500; };
	class V_PlateCarrierGL_rgr 						{ quality = 1; price = 500; };
	class V_PlateCarrierH_CTRG 						{ quality = 1; price = 100; };
	class V_PlateCarrierIA1_dgtl 					{ quality = 1; price = 80; };
	class V_PlateCarrierIA2_dgtl 					{ quality = 1; price = 100; };
	class V_PlateCarrierIAGL_dgtl 					{ quality = 1; price = 400; };
	class V_PlateCarrierIAGL_oli 					{ quality = 1; price = 400; };
	class V_PlateCarrierL_CTRG 						{ quality = 1; price = 100; };
	class V_PlateCarrierSpec_blk 					{ quality = 1; price = 200; };
	class V_PlateCarrierSpec_mtp 					{ quality = 1; price = 200; };
	class V_PlateCarrierSpec_rgr 					{ quality = 1; price = 200; };

	///////////////////////////////////////////////////////////////////////////////
	// Caps
	///////////////////////////////////////////////////////////////////////////////
	class H_Cap_blk 								{ quality = 1; price = 6; };
	class H_Cap_blk_Raven 							{ quality = 1; price = 6; };
	class H_Cap_blu 								{ quality = 1; price = 6; };
	class H_Cap_brn_SPECOPS 						{ quality = 1; price = 6; };
	class H_Cap_grn 								{ quality = 1; price = 6; };
	class H_Cap_headphones 							{ quality = 1; price = 6; };
	class H_Cap_khaki_specops_UK 					{ quality = 1; price = 6; };
	class H_Cap_oli 								{ quality = 1; price = 6; };
	class H_Cap_press 								{ quality = 1; price = 6; };
	class H_Cap_red 								{ quality = 1; price = 6; };
	class H_Cap_tan 								{ quality = 1; price = 6; };
	class H_Cap_tan_specops_US 						{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Glasses
	///////////////////////////////////////////////////////////////////////////////
	class G_Spectacles			 		{ quality = 1; price = 6; };
	class G_Spectacles_Tinted			{ quality = 1; price = 6; };
	class G_Combat			 			{ quality = 1; price = 6; };
	class G_Lowprofile			 		{ quality = 1; price = 6; };
	class G_Shades_Black			 	{ quality = 1; price = 6; };
	class G_Shades_Green			 	{ quality = 1; price = 6; };
	class G_Shades_Red			 		{ quality = 1; price = 6; };
	class G_Squares			 			{ quality = 1; price = 6; };
	class G_Squares_Tinted			 	{ quality = 1; price = 6; };
	class G_Sport_BlackWhite			{ quality = 1; price = 6; };
	class G_Sport_Blackyellow			{ quality = 1; price = 6; };
	class G_Sport_Greenblack			{ quality = 1; price = 6; };
	class G_Sport_Checkered			 	{ quality = 1; price = 6; };
	class G_Sport_Red			 		{ quality = 1; price = 6; };
	class G_Tactical_Black			 	{ quality = 1; price = 6; };
	class G_Aviator			 			{ quality = 1; price = 6; };
	class G_Lady_Mirror			 		{ quality = 1; price = 6; };
	class G_Lady_Dark			 		{ quality = 1; price = 6; };
	class G_Lady_Red			 		{ quality = 1; price = 6; };
	class G_Lady_Blue			 		{ quality = 1; price = 6; };
	class G_Diving			 			{ quality = 1; price = 6; };
	class G_B_Diving			 		{ quality = 1; price = 6; };
	class G_O_Diving			 		{ quality = 1; price = 6; };
	class G_I_Diving			 		{ quality = 1; price = 6; };
	class G_Goggles_VR			 		{ quality = 1; price = 6; };
	class G_Balaclava_blk			 	{ quality = 1; price = 10; };
	class G_Balaclava_oli			 	{ quality = 1; price = 10; };
	class G_Balaclava_combat			{ quality = 1; price = 10; };
	class G_Balaclava_lowprofile		{ quality = 1; price = 10; };
	class G_Bandanna_blk			 	{ quality = 1; price = 6; };
	class G_Bandanna_oli			 	{ quality = 1; price = 6; };
	class G_Bandanna_khk			 	{ quality = 1; price = 6; };
	class G_Bandanna_tan			 	{ quality = 1; price = 6; };
	class G_Bandanna_beast			 	{ quality = 1; price = 6; };
	class G_Bandanna_shades			 	{ quality = 1; price = 6; };
	class G_Bandanna_sport			 	{ quality = 1; price = 6; };
	class G_Bandanna_aviator			{ quality = 1; price = 6; };
	class G_Shades_Blue			 		{ quality = 1; price = 6; };
	class G_Sport_Blackred			 	{ quality = 1; price = 6; };
	class G_Tactical_Clear			 	{ quality = 1; price = 6; };
	class G_Balaclava_TI_blk_F			{ quality = 1; price = 15; };
	class G_Balaclava_TI_tna_F			{ quality = 1; price = 15; };
	class G_Balaclava_TI_G_blk_F		{ quality = 1; price = 15; };
	class G_Balaclava_TI_G_tna_F		{ quality = 1; price = 15; };
	class G_Combat_Goggles_tna_F		{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Military Caps
	///////////////////////////////////////////////////////////////////////////////
	class H_MilCap_blue 							{ quality = 1; price = 8; };
	class H_MilCap_dgtl 							{ quality = 1; price = 8; };
	class H_MilCap_mcamo 							{ quality = 1; price = 8; };
	class H_MilCap_ocamo 							{ quality = 1; price = 8; };
	class H_MilCap_oucamo 							{ quality = 1; price = 8; };
	class H_MilCap_rucamo 							{ quality = 1; price = 8; };

	///////////////////////////////////////////////////////////////////////////////
	// Beanies
	///////////////////////////////////////////////////////////////////////////////
	class H_Watchcap_blk 							{ quality = 1; price = 6; };
	class H_Watchcap_camo 							{ quality = 1; price = 6; };
	class H_Watchcap_khk 							{ quality = 1; price = 6; };
	class H_Watchcap_sgg 							{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Bandannas
	///////////////////////////////////////////////////////////////////////////////
	class H_Bandanna_camo							{ quality = 1; price = 4; };
	class H_Bandanna_cbr							{ quality = 1; price = 4; };
	class H_Bandanna_gry							{ quality = 1; price = 4; };
	class H_Bandanna_khk							{ quality = 1; price = 4; };
	class H_Bandanna_khk_hs							{ quality = 1; price = 4; };
	class H_Bandanna_mcamo							{ quality = 1; price = 4; };
	class H_Bandanna_sgg							{ quality = 1; price = 4; };
	class H_Bandanna_surfer							{ quality = 1; price = 4; };

	///////////////////////////////////////////////////////////////////////////////
	// Boonie Hats
	///////////////////////////////////////////////////////////////////////////////
	class H_Booniehat_dgtl							{ quality = 1; price = 6; };
	class H_Booniehat_dirty							{ quality = 1; price = 6; };
	class H_Booniehat_grn							{ quality = 1; price = 6; };
	class H_Booniehat_indp							{ quality = 1; price = 6; };
	class H_Booniehat_khk							{ quality = 1; price = 6; };
	class H_Booniehat_khk_hs						{ quality = 1; price = 6; };
	class H_Booniehat_mcamo							{ quality = 1; price = 6; };
	class H_Booniehat_tan							{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Hats
	///////////////////////////////////////////////////////////////////////////////
	class H_Hat_blue								{ quality = 1; price = 6; };
	class H_Hat_brown								{ quality = 1; price = 6; };
	class H_Hat_camo								{ quality = 1; price = 6; };
	class H_Hat_checker								{ quality = 1; price = 6; };
	class H_Hat_grey								{ quality = 1; price = 6; };
	class H_Hat_tan									{ quality = 1; price = 6; };
	class H_StrawHat								{ quality = 1; price = 6; };
	class H_StrawHat_dark							{ quality = 1; price = 6; };
	class Exile_Headgear_SantaHat					{ quality = 1; price = 10; };
	class Exile_Headgear_SafetyHelmet				{ quality = 1; price = 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Berets
	///////////////////////////////////////////////////////////////////////////////
	class H_Beret_02								{ quality = 1; price = 6; };
	class H_Beret_blk								{ quality = 1; price = 6; };
	class H_Beret_blk_POLICE						{ quality = 1; price = 6; };
	class H_Beret_brn_SF							{ quality = 1; price = 6; };
	class H_Beret_Colonel							{ quality = 1; price = 8; };
	class H_Beret_grn								{ quality = 1; price = 6; };
	class H_Beret_grn_SF							{ quality = 1; price = 6; };
	class H_Beret_ocamo								{ quality = 1; price = 6; };
	class H_Beret_red								{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Shemags
	///////////////////////////////////////////////////////////////////////////////
	class H_Shemag_khk								{ quality = 1; price = 10; };
	class H_Shemag_olive							{ quality = 1; price = 10; };
	class H_Shemag_olive_hs							{ quality = 1; price = 10; };
	class H_Shemag_tan								{ quality = 1; price = 10; };
	class H_ShemagOpen_khk							{ quality = 1; price = 10; };
	class H_ShemagOpen_tan							{ quality = 1; price = 10; };
	class H_TurbanO_blk								{ quality = 1; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
	// Light Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetB_light							{ quality = 1; price = 20; };
	class H_HelmetB_light_black						{ quality = 1; price = 20; };
	class H_HelmetB_light_desert					{ quality = 1; price = 20; };
	class H_HelmetB_light_grass						{ quality = 1; price = 20; };
	class H_HelmetB_light_sand						{ quality = 1; price = 20; };
	class H_HelmetB_light_snakeskin					{ quality = 1; price = 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetIA								{ quality = 1; price = 40; };
	class H_HelmetIA_camo							{ quality = 1; price = 40; };
	class H_HelmetIA_net							{ quality = 1; price = 40; };
	class H_HelmetB									{ quality = 1; price = 60; };
	class H_HelmetB_black							{ quality = 1; price = 60; };
	class H_HelmetB_camo							{ quality = 1; price = 80; }; // This one is awesome!
	class H_HelmetB_desert							{ quality = 1; price = 60; };
	class H_HelmetB_grass							{ quality = 1; price = 60; };
	class H_HelmetB_paint							{ quality = 1; price = 60; };
	class H_HelmetB_plain_blk						{ quality = 1; price = 60; };
	class H_HelmetB_sand							{ quality = 1; price = 60; };
	class H_HelmetB_snakeskin						{ quality = 1; price = 60; };

	///////////////////////////////////////////////////////////////////////////////
	// Spec Ops Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetSpecB								{ quality = 1; price = 80; };
	class H_HelmetSpecB_blk							{ quality = 1; price = 80; };
	class H_HelmetSpecB_paint1						{ quality = 1; price = 80; };
	class H_HelmetSpecB_paint2						{ quality = 1; price = 80; };

	///////////////////////////////////////////////////////////////////////////////
	// Super Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetO_ocamo							{ quality = 1; price = 150; };
	class H_HelmetO_oucamo							{ quality = 1; price = 150; };
	class H_HelmetSpecO_blk							{ quality = 1; price = 100; };
	class H_HelmetSpecO_ocamo						{ quality = 1; price = 100; };
	class H_HelmetLeaderO_ocamo						{ quality = 1; price = 200; };
	class H_HelmetLeaderO_oucamo					{ quality = 1; price = 200; };

	///////////////////////////////////////////////////////////////////////////////
	// Pointer Attachments
	///////////////////////////////////////////////////////////////////////////////
	class acc_flashlight 							{ quality = 1; price = 4; };
	class acc_pointer_IR 							{ quality = 1; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
	// Bitpod Attachments
	///////////////////////////////////////////////////////////////////////////////
	class bipod_01_F_blk	 						{ quality = 1; price = 10; };
	class bipod_01_F_mtp	 						{ quality = 1; price = 10; };
	class bipod_01_F_snd	 						{ quality = 1; price = 10; };
	class bipod_02_F_blk	 						{ quality = 1; price = 10; };
	class bipod_02_F_hex	 						{ quality = 1; price = 10; };
	class bipod_02_F_tan	 						{ quality = 1; price = 10; };
	class bipod_03_F_blk	 						{ quality = 1; price = 10; };
	class bipod_03_F_oli	 						{ quality = 1; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
	// Muzzle Attachments
	///////////////////////////////////////////////////////////////////////////////
	class muzzle_snds_338_black 					{ quality = 1; price = 50; };
	class muzzle_snds_338_green 					{ quality = 1; price = 50; };
	class muzzle_snds_338_sand 						{ quality = 1; price = 50; };
	class muzzle_snds_93mmg 						{ quality = 1; price = 50; };
	class muzzle_snds_93mmg_tan 					{ quality = 1; price = 50; };
	class muzzle_snds_acp 							{ quality = 1; price = 10; };
	class muzzle_snds_B 							{ quality = 1; price = 20; };
	class muzzle_snds_H 							{ quality = 1; price = 20; };
	class muzzle_snds_H_MG 							{ quality = 1; price = 20; };
	class muzzle_snds_H_SW 							{ quality = 1; price = 20; };
	class muzzle_snds_L 							{ quality = 1; price = 10; };
	class muzzle_snds_M 							{ quality = 1; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
	// UAVS
	///////////////////////////////////////////////////////////////////////////////
	class I_UavTerminal								{ quality = 1; price = 750; };
	class I_UAV_01_backpack_F						{ quality = 1; price = 3000; };

	///////////////////////////////////////////////////////////////////////////////
	// Static MGs
	///////////////////////////////////////////////////////////////////////////////
	class O_HMG_01_weapon_F 						{ quality = 1; price = 5000; };
	class O_HMG_01_support_F 						{ quality = 1; price = 1000; };
	// Does not seem to work with HMG01, only the lower version does
	//class O_HMG_01_support_high_F 				{ quality = QUALITY_LEVEL_9000; price = 5000; };

	///////////////////////////////////////////////////////////////////////////////
	// Optic Attachments
	///////////////////////////////////////////////////////////////////////////////
	class optic_Aco									{ quality = 1; price = 70; };
	class optic_ACO_grn								{ quality = 1; price = 70; };
	class optic_ACO_grn_smg							{ quality = 1; price = 70; };
	class optic_Aco_smg								{ quality = 1; price = 70; };
	class optic_AMS									{ quality = 1; price = 300; };
	class optic_AMS_khk								{ quality = 1; price = 300; };
	class optic_AMS_snd								{ quality = 1; price = 300; };
	class optic_Arco								{ quality = 1; price = 100; };
	class optic_DMS									{ quality = 1; price = 150; };
	class optic_Hamr								{ quality = 1; price = 200; };
	class optic_Holosight							{ quality = 1; price = 50; };
	class optic_Holosight_smg						{ quality = 1; price = 50; };
	class optic_KHS_blk								{ quality = 1; price = 300; };
	class optic_KHS_hex								{ quality = 1; price = 300; };
	class optic_KHS_old								{ quality = 1; price = 300; };
	class optic_KHS_tan								{ quality = 1; price = 300; };
	class optic_LRPS								{ quality = 1; price = 300; };
	class optic_MRCO								{ quality = 1; price = 100; };
	class optic_MRD									{ quality = 1; price = 10; };
	class optic_Nightstalker						{ quality = 1; price = 1000; };
	class optic_NVS									{ quality = 1; price = 500; };
	class optic_SOS									{ quality = 1; price = 200; };
	//class optic_tws									{ quality = QUALITY_LEVEL_9000; price = 1500; };
	//class optic_tws_mg								{ quality = QUALITY_LEVEL_9000; price = 1500; };
	class optic_Yorris								{ quality = 1; price = 10; };

	*/
	///////////////////////////////////////////////////////////////////////////////
	// Hardware
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_Rope							{ quality = 1; price = 20; };
	class Exile_Item_DuctTape						{ quality = 1; price = 300; };
	class Exile_Item_ExtensionCord					{ quality = 1; price = 40; };
	class Exile_Item_FuelCanisterEmpty				{ quality = 1; price = 40; };
	class Exile_Item_JunkMetal						{ quality = 1; price = 400; };
	class Exile_Item_LightBulb						{ quality = 1; price = 20; };
	class Exile_Item_MetalBoard						{ quality = 1; price = 600; };
	class Exile_Item_MetalHedgehogKit				{ quality = 1; price = 1200; };
	class Exile_Item_SafeKit						{ quality = 1; price = 25000; };
	class Exile_Item_CodeLock						{ quality = 1; price = 5000; };
	class Exile_Item_Laptop						{ quality = 1; price = 9000; };
	class Exile_Item_BaseCameraKit				{ quality = 1; price = 5000; };
	class Exile_Item_CamoTentKit					{ quality = 1; price = 250; };
	class Exile_Item_MetalPole						{ quality = 1; price = 800; };
	class Exile_Item_MetalScrews					{ quality = 1; price = 100; };
	class Exile_Item_MetalWire					{ quality = 1; price = 100; };
	class Exile_Item_Cement						{ quality = 1; price = 20; };
	class Exile_Item_Sand							{ quality = 1; price = 20; };
	class Exile_Item_CarWheel						{ quality = 1; price = 1000; };
	
	// Added in 1.0.3, but not used
	//class Exile_Item_SprayCan_Black				{ quality = 1; price = 20; };
	//class Exile_Item_SprayCan_Red					{ quality = 1; price = 20; };
	//class Exile_Item_SprayCan_Green				{ quality = 1; price = 20; };
	//class Exile_Item_SprayCan_White				{ quality = 1; price = 20; };
	//class Exile_Item_SprayCan_Blue				{ quality = 1; price = 20; };
	//class Exile_Item_BurlapSack					{ quality = 1; price = 5; };
	//class Exile_Item_Bullets_556					{ quality = 1; price = 5; };
	//class Exile_Item_Bullets_762					{ quality = 1; price = 5; };
	//class Exile_Item_WeaponParts					{ quality = 1; price = 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Food
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_SheepSteak_Cooked				{ quality = 1; price = 230; }; //100, 30
	class Exile_Item_AlsatianSteak_Cooked			{ quality = 1; price = 230; }; //100, 30
	class Exile_Item_CatSharkFilet_Cooked			{ quality = 1; price = 230; }; //100, 30
	class Exile_Item_FinSteak_Cooked				{ quality = 1; price = 230; }; //100, 30
	class Exile_Item_GoatSteak_Cooked				{ quality = 1; price = 230; }; //100, 30
	class Exile_Item_TurtleFilet_Cooked				{ quality = 1; price = 230; }; //100, 30
	class Exile_Item_TunaFilet_Cooked				{ quality = 1; price = 220; }; //90, 30
	class Exile_Item_RabbitSteak_Cooked				{ quality = 1; price = 215; }; //80, 30
	class Exile_Item_EMRE							{ quality = 1; price = 54; }; //75, 60
	class Exile_Item_ChickenFilet_Cooked			{ quality = 1; price = 205; }; //70, 30
	class Exile_Item_RoosterFilet_Cooked			{ quality = 1; price = 205; }; //70, 30
	class Exile_Item_MulletFilet_Cooked				{ quality = 1; price = 200; }; //65, 30
	class Exile_Item_SalemaFilet_Cooked				{ quality = 1; price = 200; }; //65, 30
	class Exile_Item_GloriousKnakworst				{ quality = 1; price = 40; }; //60, 30
	class Exile_Item_MackerelFilet_Cooked			{ quality = 1; price = 190; }; //55, 30
	class Exile_Item_Surstromming					{ quality = 1; price = 34; }; //55, 25
	class Exile_Item_SausageGravy					{ quality = 1; price = 30; }; //50, 25
	class Exile_Item_OrnateFilet_Cooked				{ quality = 1; price = 180; }; //40, 30
	class Exile_Item_SnakeFilet_Cooked				{ quality = 1; price = 180; }; //40, 30
	class Exile_Item_Catfood						{ quality = 1; price = 24; }; //40, 40
	class Exile_Item_ChristmasTinner				{ quality = 1; price = 20; }; //40, 60
	class Exile_Item_BBQSandwich					{ quality = 1; price = 20; }; //40, 60
	class Exile_Item_MacasCheese					{ quality = 1; price = 20; }; //40, 60
	class Exile_Item_Dogfood						{ quality = 1; price = 18; }; //30, 30
	class Exile_Item_BeefParts						{ quality = 1; price = 18; }; //30, 30
	class Exile_Item_Cheathas						{ quality = 1; price = 18; }; //30, 30
	class Exile_Item_CatSharkFilet_Raw				{ quality = 1; price = 125; }; //25, 30
	class Exile_Item_Noodles						{ quality = 1; price = 14; }; //25, 50
	class Exile_Item_SeedAstics						{ quality = 1; price = 12; }; //20, 40
	class Exile_Item_TunaFilet_Raw					{ quality = 1; price = 120; }; //20, 30
	class Exile_Item_AlsatianSteak_Raw				{ quality = 1; price = 115; };	//15, 30
	class Exile_Item_TurtleFilet_Raw				{ quality = 1; price = 115; }; //15, 30
	class Exile_Item_SheepSteak_Raw					{ quality = 1; price = 115; }; //15, 30
	class Exile_Item_FinSteak_Raw					{ quality = 1; price = 115; }; //15, 30
	class Exile_Item_GoatSteak_Raw					{ quality = 1; price = 115; }; //15, 30
	class Exile_Item_Raisins						{ quality = 1; price = 10; }; //15, 30
	class Exile_Item_ChickenFilet_Raw				{ quality = 1; price = 110; }; //10, 30
	class Exile_Item_RoosterFilet_Raw				{ quality = 1; price = 110; }; //10, 30
	class Exile_Item_Moobar							{ quality = 1; price = 8; }; //10, 30
	class Exile_Item_InstantCoffee					{ quality = 1; price = 20; }; //5, 10
	class Exile_Item_MackerelFilet_Raw				{ quality = 1; price = 108; }; //5, 30
	class Exile_Item_MulletFilet_Raw				{ quality = 1; price = 108; }; //5, 30
	class Exile_Item_OrnateFilet_Raw				{ quality = 1; price = 108; }; //5, 30
	class Exile_Item_RabbitSteak_Raw				{ quality = 1; price = 108; }; //5, 30
	class Exile_Item_SalemaFilet_Raw				{ quality = 1; price = 108; }; //5, 30
	class Exile_Item_SnakeFilet_Raw					{ quality = 1; price = 108; }; //5, 30
	class Exile_Item_Can_Empty						{ quality = 1; price = 1; sellPrice = 1; };

	///////////////////////////////////////////////////////////////////////////////
	// Drinks
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_PlasticBottleCoffee	 		{ quality = 1; price = 70; sellPrice = 10; };//100, 60
	class Exile_Item_PowerDrink						{ quality = 1; price = 60; }; //95, 10
	class Exile_Item_PlasticBottleFreshWater 		{ quality = 1; price = 50; sellPrice = 4; }; //80, 15
	class Exile_Item_Beer 							{ quality = 1; price = 50; }; //75, 30
	class Exile_Item_EnergyDrink					{ quality = 1; price = 40; }; //75, 20
	class Exile_Item_ChocolateMilk					{ quality = 1; price = 25; }; //75, 20
	class Exile_Item_MountainDupe					{ quality = 1; price = 30; }; //50, 20
	class Exile_Item_PlasticBottleEmpty				{ quality = 1; price = 4; };

	///////////////////////////////////////////////////////////////////////////////
	// First Aid
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_InstaDoc                       { quality = 1; price = 1250; };
	class Exile_Item_Vishpirin						{ quality = 1; price = 300; };
	class Exile_Item_Bandage	                    { quality = 1; price = 100; };
	class Exile_Item_Heatpack	                    { quality = 1; price = 50; };

	//class Exile_Item_Defibrillator				{ quality = 1; price = 7500; };

	///////////////////////////////////////////////////////////////////////////////
	// Tools
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_Matches 						{ quality = 1; price = 60; };
	class Exile_Item_CookingPot						{ quality = 1; price = 80; };
	class Exile_Melee_Axe							{ quality = 1; price = 100; };
	class Exile_Melee_SledgeHammmer					{ quality = 1; price = 500; };
	class Exile_Item_CanOpener						{ quality = 1; price = 80; };
	class Exile_Item_Handsaw						{ quality = 1; price = 500; };
	class Exile_Item_Pliers							{ quality = 1; price = 350; };
	class Exile_Item_Grinder						{ quality = 1; price = 1250; };
	class Exile_Item_Foolbox						{ quality = 1; price = 4000; };
	class Exile_Item_CordlessScrewdriver			{ quality = 1; price = 750; };
	class Exile_Item_FireExtinguisher				{ quality = 1; price = 650; };
	class Exile_Item_Hammer						{ quality = 1; price = 600; };
	class Exile_Item_OilCanister					{ quality = 1; price = 1750; };
	class Exile_Item_Screwdriver					{ quality = 1; price = 250; };
	class Exile_Item_Shovel						{ quality = 1; price = 700; };
	class Exile_Item_Wrench						{ quality = 1; price = 250; };
	class Exile_Item_SleepingMat					{ quality = 1; price = 1250; };
	class Exile_Item_ToiletPaper					{ quality = 1; price = 5; };
	class Exile_Item_ZipTie						{ quality = 1; price = 250; };

	///////////////////////////////////////////////////////////////////////////////
	// Navigation
	///////////////////////////////////////////////////////////////////////////////
	class ItemWatch									{ quality = 1; price = 2; };
	class ItemGPS									{ quality = 1; price = 40; };
	class ItemMap									{ quality = 1; price = 6; };
	class ItemCompass								{ quality = 1; price = 6; };
	class ItemRadio									{ quality = 1; price = 40; };
	class Binocular									{ quality = 1; price = 40; };
	class Rangefinder								{ quality = 1; price = 200; };
	class Laserdesignator							{ quality = 1; price = 750; };
	class Laserdesignator_02						{ quality = 1; price = 750; };
	class Laserdesignator_03						{ quality = 1; price = 750; };
	class NVGoggles									{ quality = 1; price = 100; };
	class NVGoggles_INDEP							{ quality = 1; price = 100; };
	class NVGoggles_OPFOR							{ quality = 1; price = 100; };
	class Exile_Item_XM8							{ quality = 1; price = 20; };
	class Exile_Item_MobilePhone					{ quality = 1; price = 500; };

	///////////////////////////////////////////////////////////////////////////////
	// Watch out for a Walter fart! He has gas!
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Headgear_GasMask					{ quality = 1; price = 500; };

	///////////////////////////////////////////////////////////////////////////////
	// Rebreather
	///////////////////////////////////////////////////////////////////////////////
	class V_RebreatherB								{ quality = 1; price = 250; };
	class V_RebreatherIA							{ quality = 1; price = 250; };
	class V_RebreatherIR							{ quality = 1; price = 250; };

	/*
	///////////////////////////////////////////////////////////////////////////////
	// Pilot Stuff
	///////////////////////////////////////////////////////////////////////////////
	class B_Parachute								{ quality = 1; price = 150; };
	class H_CrewHelmetHeli_B						{ quality = 1; price = 150; };
	class H_CrewHelmetHeli_I						{ quality = 1; price = 150; };
	class H_CrewHelmetHeli_O						{ quality = 1; price = 150; };
	class H_HelmetCrew_I							{ quality = 1; price = 100; };
	class H_HelmetCrew_B							{ quality = 1; price = 100; };
	class H_HelmetCrew_O							{ quality = 1; price = 100; };
	class H_PilotHelmetHeli_B						{ quality = 1; price = 100; };
	class H_PilotHelmetHeli_I						{ quality = 1; price = 100; };
	class H_PilotHelmetHeli_O						{ quality = 1; price = 100; };
	class U_B_HeliPilotCoveralls					{ quality = 1; price = 80; };
	class U_B_PilotCoveralls						{ quality = 1; price = 60; };
	class U_I_HeliPilotCoveralls					{ quality = 1; price = 60; };
	class U_I_pilotCoveralls						{ quality = 1; price = 60; };
	class U_O_PilotCoveralls						{ quality = 1; price = 60; };
	class H_PilotHelmetFighter_B					{ quality = 1; price = 150; };
	class H_PilotHelmetFighter_I					{ quality = 1; price = 150; };
	class H_PilotHelmetFighter_O					{ quality = 1; price = 150; };

	///////////////////////////////////////////////////////////////////////////////
	// Backpacks
	///////////////////////////////////////////////////////////////////////////////
	class B_HuntingBackpack							{ quality = 1; price = 70; };
	class B_OutdoorPack_blk							{ quality = 1; price = 80; };
	class B_OutdoorPack_blu							{ quality = 1; price = 80; };
	class B_OutdoorPack_tan							{ quality = 1; price = 80; };
	class B_AssaultPack_blk							{ quality = 1; price = 90; };
	class B_AssaultPack_cbr							{ quality = 1; price = 90; };
	class B_AssaultPack_dgtl						{ quality = 1; price = 90; };
	class B_AssaultPack_khk							{ quality = 1; price = 90; };
	class B_AssaultPack_mcamo						{ quality = 1; price = 90; };
	class B_AssaultPack_rgr							{ quality = 1; price = 90; };
	class B_AssaultPack_sgg							{ quality = 1; price = 90; };
	class B_FieldPack_blk							{ quality = 1; price = 120; };
	class B_FieldPack_cbr							{ quality = 1; price = 120; };
	class B_FieldPack_ocamo							{ quality = 1; price = 120; };
	class B_FieldPack_oucamo						{ quality = 1; price = 120; };
	class B_TacticalPack_blk						{ quality = 1; price = 150; };
	class B_TacticalPack_rgr						{ quality = 1; price = 150; };
	class B_TacticalPack_ocamo						{ quality = 1; price = 150; };
	class B_TacticalPack_mcamo						{ quality = 1; price = 150; };
	class B_TacticalPack_oli						{ quality = 1; price = 150; };
	class B_Kitbag_cbr								{ quality = 1; price = 200; };
	class B_Kitbag_mcamo							{ quality = 1; price = 200; };
	class B_Kitbag_sgg								{ quality = 1; price = 200; };
	class B_Bergen_blk								{ quality = 1; price = 200; };
	class B_Bergen_mcamo							{ quality = 1; price = 200; };
	class B_Bergen_rgr								{ quality = 1; price = 200; };
	class B_Bergen_sgg								{ quality = 1; price = 200; };
	class B_Carryall_cbr							{ quality = 1; price = 300; };
	class B_Carryall_khk							{ quality = 1; price = 300; };
	class B_Carryall_mcamo							{ quality = 1; price = 300; };
	class B_Carryall_ocamo							{ quality = 1; price = 300; };
	class B_Carryall_oli							{ quality = 1; price = 300; };
	class B_Carryall_oucamo							{ quality = 1; price = 300; };
	*/
	//gm clothes uniforms chaddles mod start
	//facewear
	class gm_headgear_foliage_summer_grass_01                                               {quality = 1; price = 52;};
	class gm_headgear_foliage_summer_grass_02                                               {quality = 1; price = 52;};
	class gm_headgear_foliage_summer_grass_03                                               {quality = 1; price = 52;};
	class gm_headgear_foliage_summer_grass_04                                               {quality = 1; price = 52;};
	class gm_headgear_foliage_summer_forest_01                                              {quality = 1; price = 52;};
	class gm_headgear_foliage_summer_forest_02                                              {quality = 1; price = 52;};
	class gm_headgear_foliage_summer_forest_03                                              {quality = 1; price = 52;};
	class gm_headgear_foliage_summer_forest_04                                              {quality = 1; price = 52;};
	class gm_xx_facewear_scarf_01_blk                                                       {quality = 1; price = 52;};
	class gm_xx_facewear_scarf_01_blu                                                       {quality = 1; price = 52;};
	class gm_xx_facewear_scarf_01_flk                                                       {quality = 1; price = 52;};
	class gm_xx_facewear_scarf_01_frog                                                      {quality = 1; price = 52;};
	class gm_xx_facewear_scarf_01_grn                                                       {quality = 1; price = 52;};
	class gm_xx_facewear_scarf_01_gry                                                       {quality = 1; price = 52;};
	class gm_xx_facewear_scarf_01_m84                                                       {quality = 1; price = 52;};
	class gm_xx_facewear_scarf_01_moro                                                      {quality = 1; price = 52;};
	class gm_xx_facewear_scarf_01_oli                                                       {quality = 1; price = 52;};
	class gm_xx_facewear_scarf_01_pt1                                                       {quality = 1; price = 52;};
	class gm_xx_facewear_scarf_01_pt2                                                       {quality = 1; price = 52;};
	class gm_xx_facewear_scarf_01_pt3                                                       {quality = 1; price = 52;};
	class gm_xx_facewear_scarf_01_red                                                       {quality = 1; price = 52;};
	class gm_xx_facewear_scarf_01_str                                                       {quality = 1; price = 52;};
	class gm_xx_facewear_scarf_01_trp                                                       {quality = 1; price = 52;};
	class gm_xx_facewear_scarf_01_wht                                                       {quality = 1; price = 52;};
	class gm_xx_facewear_scarf_02_blk                                                       {quality = 1; price = 52;};
	class gm_xx_facewear_scarf_02_grn                                                       {quality = 1; price = 52;};
	class gm_xx_facewear_scarf_02_oli                                                       {quality = 1; price = 52;};
	class gm_xx_facewear_scarf_02_wht                                                       {quality = 1; price = 52;};
	class gm_gc_army_facewear_schm41m                                                       {quality = 1; price = 60;};
	class gm_gc_army_facewear_dustglasses                                                   {quality = 1; price = 52;};
	class gm_ge_facewear_m65                                                                {quality = 1; price = 60;};
	class gm_ge_facewear_dustglasses                                                        {quality = 1; price = 52;};
	class gm_ge_facewear_sunglasses                                                         {quality = 1; price = 52;};
	class gm_ge_facewear_acidgoggles                                                        {quality = 1; price = 52;};
	class gm_ge_facewear_glacierglasses                                                     {quality = 1; price = 52;};
	class gm_ge_facewear_stormhood_blk                                                      {quality = 1; price = 52;};
	class gm_ge_facewear_stormhood_brd                                                      {quality = 1; price = 52;};
	class gm_ge_facewear_stormhood_dustglasses_blk                                          {quality = 1; price = 52;};
	//headgear
	class gm_xx_headgear_headwrap_01_blk                                                    {quality = 1; price = 75;};
	class gm_xx_headgear_headwrap_01_blu                                                    {quality = 1; price = 75;};
	class gm_xx_headgear_headwrap_01_dino                                                   {quality = 1; price = 75;};
	class gm_xx_headgear_headwrap_01_flk                                                    {quality = 1; price = 75;};
	class gm_xx_headgear_headwrap_01_frog                                                   {quality = 1; price = 75;};
	class gm_xx_headgear_headwrap_01_grn                                                    {quality = 1; price = 75;};
	class gm_xx_headgear_headwrap_01_m84                                                    {quality = 1; price = 75;};
	class gm_xx_headgear_headwrap_01_moro                                                   {quality = 1; price = 75;};
	class gm_xx_headgear_headwrap_01_oli                                                    {quality = 1; price = 75;};
	class gm_xx_headgear_headwrap_01_smp                                                    {quality = 1; price = 75;};
	class gm_xx_headgear_headwrap_01_str                                                    {quality = 1; price = 75;};
	class gm_xx_headgear_headwrap_01_trp                                                    {quality = 1; price = 75;};
	class gm_xx_headgear_headwrap_01_wht                                                    {quality = 1; price = 75;};
	class gm_xx_headgear_headwrap_crew_01_blk                                               {quality = 1; price = 75;};
	class gm_xx_headgear_headwrap_crew_01_flk                                               {quality = 1; price = 75;};
	class gm_xx_headgear_headwrap_crew_01_grn                                               {quality = 1; price = 75;};
	class gm_xx_headgear_headwrap_crew_01_m84                                               {quality = 1; price = 75;};
	class gm_xx_headgear_headwrap_crew_01_oli                                               {quality = 1; price = 75;};
	class gm_xx_headgear_headwrap_crew_01_smp                                               {quality = 1; price = 75;};
	class gm_xx_headgear_headwrap_crew_01_trp                                               {quality = 1; price = 75;};
	class gm_gc_army_headgear_m56                                                           {quality = 1; price = 87;};
	class gm_gc_army_headgear_m56_net                                                       {quality = 1; price = 87;};
	class gm_gc_army_headgear_m56_cover_str                                                 {quality = 1; price = 87;};
	class gm_gc_army_headgear_m56_cover_win                                                 {quality = 1; price = 87;};
	class gm_gc_army_headgear_m56_cover_blu                                                 {quality = 1; price = 87;};
	class gm_gc_army_headgear_crewhat_80_blk                                                {quality = 1; price = 75;};
	class gm_gc_pol_headgear_cap_80_blu                                                     {quality = 1; price = 75;};
	class gm_gc_army_headgear_cap_80_gry                                                    {quality = 1; price = 75;};
	class gm_gc_army_headgear_hat_80_grn                                                    {quality = 1; price = 75;};
	class gm_gc_bgs_headgear_hat_80_gry                                                     {quality = 1; price = 75;};
	class gm_gc_headgear_zsh3_orn                                                           {quality = 1; price = 75;};
	class gm_gc_headgear_zsh3_wht                                                           {quality = 1; price = 75;};
	class gm_gc_headgear_zsh3_blu                                                           {quality = 1; price = 75;};
	class gm_gc_headgear_fjh_model4_oli                                                     {quality = 1; price = 75;};
	class gm_gc_headgear_fjh_model4_wht                                                     {quality = 1; price = 75;};
	class gm_gc_headgear_beret_blk                                                          {quality = 1; price = 75;};
	class gm_gc_headgear_beret_orn                                                          {quality = 1; price = 75;};
	class gm_gc_headgear_beret_str                                                          {quality = 1; price = 75;};
	class gm_gc_headgear_beret_officer_blk                                                  {quality = 1; price = 75;};
	class gm_gc_headgear_beret_officer_orn                                                  {quality = 1; price = 75;};
	class gm_gc_headgear_beret_officer_str                                                  {quality = 1; price = 75;};
	class gm_ge_headgear_m62                                                                {quality = 1; price = 87;};
	class gm_ge_headgear_m62_net                                                            {quality = 1; price = 87;};
	class gm_ge_headgear_m62_cover_flk                                                      {quality = 1; price = 87;};
	class gm_ge_headgear_m62_cover_blu                                                      {quality = 1; price = 87;};
	class gm_ge_headgear_m62_cover_win                                                      {quality = 1; price = 87;};
	class gm_ge_headgear_m62_cover_wdl                                                      {quality = 1; price = 87;};
	class gm_ge_headgear_m62_smr_grs_01                                                     {quality = 1; price = 87;};
	class gm_ge_headgear_m62_smr_grs_02                                                     {quality = 1; price = 87;};
	class gm_ge_headgear_m62_smr_grs_03                                                     {quality = 1; price = 87;};
	class gm_ge_headgear_m62_smr_grs_04                                                     {quality = 1; price = 87;};
	class gm_ge_headgear_m62_smr_for_01                                                     {quality = 1; price = 87;};
	class gm_ge_headgear_m62_smr_for_02                                                     {quality = 1; price = 87;};
	class gm_ge_headgear_m62_smr_for_03                                                     {quality = 1; price = 87;};
	class gm_ge_headgear_m62_smr_for_04                                                     {quality = 1; price = 87;};
	class gm_ge_headgear_m62_aut_grs_01                                                     {quality = 1; price = 87;};
	class gm_ge_headgear_m62_aut_grs_02                                                     {quality = 1; price = 87;};
	class gm_ge_headgear_m62_aut_grs_03                                                     {quality = 1; price = 87;};
	class gm_ge_headgear_m62_aut_grs_04                                                     {quality = 1; price = 87;};
	class gm_ge_headgear_m62_win_pap_01                                                     {quality = 1; price = 87;};
	class gm_ge_headgear_beret_grn                                                          {quality = 1; price = 75;};
	class gm_ge_headgear_beret_bdx                                                          {quality = 1; price = 75;};
	class gm_ge_headgear_beret_blk                                                          {quality = 1; price = 75;};
	class gm_ge_headgear_beret_red                                                          {quality = 1; price = 75;};
	class gm_ge_headgear_beret_blu                                                          {quality = 1; price = 75;};
	class gm_ge_headgear_beret_mrb                                                          {quality = 1; price = 75;};
	class gm_ge_headgear_beret_un                                                           {quality = 1; price = 75;};
	class gm_ge_headgear_beret_bdx_armyaviation                                             {quality = 1; price = 75;};
	class gm_ge_headgear_beret_bdx_lrrp                                                     {quality = 1; price = 75;};
	class gm_ge_headgear_beret_bdx_paratrooper                                              {quality = 1; price = 75;};
	class gm_ge_headgear_beret_bdx_specop                                                   {quality = 1; price = 75;};
	class gm_ge_headgear_beret_blk_antitank                                                 {quality = 1; price = 75;};
	class gm_ge_headgear_beret_blk_armor                                                    {quality = 1; price = 75;};
	class gm_ge_headgear_beret_blk_armorrecon                                               {quality = 1; price = 75;};
	class gm_ge_headgear_beret_blk_recon                                                    {quality = 1; price = 75;};
	class gm_ge_bgs_headgear_beret_grn_sf                                                   {quality = 1; price = 75;};
	class gm_ge_bgs_headgear_beret_grn                                                      {quality = 1; price = 75;};
	class gm_ge_headgear_beret_grn_guardbtl                                                 {quality = 1; price = 75;};
	class gm_ge_headgear_beret_grn_infantry                                                 {quality = 1; price = 75;};
	class gm_ge_headgear_beret_grn_mechinf                                                  {quality = 1; price = 75;};
	class gm_ge_headgear_beret_grn_music                                                    {quality = 1; price = 75;};
	class gm_ge_headgear_beret_red_antiair                                                  {quality = 1; price = 75;};
	class gm_ge_headgear_beret_red_artillery                                                {quality = 1; price = 75;};
	class gm_ge_headgear_beret_red_engineer                                                 {quality = 1; price = 75;};
	class gm_ge_headgear_beret_red_geoinfo                                                  {quality = 1; price = 75;};
	class gm_ge_headgear_beret_red_maintenance                                              {quality = 1; price = 75;};
	class gm_ge_headgear_beret_red_militarypolice                                           {quality = 1; price = 75;};
	class gm_ge_headgear_beret_red_nbc                                                      {quality = 1; price = 75;};
	class gm_ge_headgear_beret_red_opcom                                                    {quality = 1; price = 75;};
	class gm_ge_headgear_beret_red_signals                                                  {quality = 1; price = 75;};
	class gm_ge_headgear_beret_red_supply                                                   {quality = 1; price = 75;};
	class gm_ge_headgear_beret_blu_medical                                                  {quality = 1; price = 75;};
	class gm_ge_headgear_beret_crew_grn                                                     {quality = 1; price = 75;};
	class gm_ge_headgear_beret_crew_bdx                                                     {quality = 1; price = 75;};
	class gm_ge_headgear_beret_crew_blk                                                     {quality = 1; price = 75;};
	class gm_ge_headgear_beret_crew_red                                                     {quality = 1; price = 75;};
	class gm_ge_headgear_beret_crew_blu                                                     {quality = 1; price = 75;};
	class gm_ge_headgear_beret_crew_mrb                                                     {quality = 1; price = 75;};
	class gm_ge_headgear_beret_crew_un                                                      {quality = 1; price = 75;};
	class gm_ge_headgear_beret_crew_bdx_armyaviation                                        {quality = 1; price = 75;};
	class gm_ge_headgear_beret_crew_bdx_lrrp                                                {quality = 1; price = 75;};
	class gm_ge_headgear_beret_crew_bdx_paratrooper                                         {quality = 1; price = 75;};
	class gm_ge_headgear_beret_crew_bdx_specop                                              {quality = 1; price = 75;};
	class gm_ge_headgear_beret_crew_blk_antitank                                            {quality = 1; price = 75;};
	class gm_ge_headgear_beret_crew_blk_armor                                               {quality = 1; price = 75;};
	class gm_ge_headgear_beret_crew_blk_armorrecon                                          {quality = 1; price = 75;};
	class gm_ge_headgear_beret_crew_blk_recon                                               {quality = 1; price = 75;};
	class gm_ge_headgear_beret_crew_grn_guardbtl                                            {quality = 1; price = 75;};
	class gm_ge_headgear_beret_crew_grn_infantry                                            {quality = 1; price = 75;};
	class gm_ge_headgear_beret_crew_grn_mechinf                                             {quality = 1; price = 75;};
	class gm_ge_headgear_beret_crew_grn_music                                               {quality = 1; price = 75;};
	class gm_ge_bgs_headgear_beret_crew_grn_sf                                              {quality = 1; price = 75;};
	class gm_ge_bgs_headgear_beret_crew_grn                                                 {quality = 1; price = 75;};
	class gm_ge_headgear_beret_crew_red_antiair                                             {quality = 1; price = 75;};
	class gm_ge_headgear_beret_crew_red_artillery                                           {quality = 1; price = 75;};
	class gm_ge_headgear_beret_crew_red_engineer                                            {quality = 1; price = 75;};
	class gm_ge_headgear_beret_crew_red_geoinfo                                             {quality = 1; price = 75;};
	class gm_ge_headgear_beret_crew_red_maintenance                                         {quality = 1; price = 75;};
	class gm_ge_headgear_beret_crew_red_militarypolice                                      {quality = 1; price = 75;};
	class gm_ge_headgear_beret_crew_red_nbc                                                 {quality = 1; price = 75;};
	class gm_ge_headgear_beret_crew_red_opcom                                               {quality = 1; price = 75;};
	class gm_ge_headgear_beret_crew_red_signals                                             {quality = 1; price = 75;};
	class gm_ge_headgear_beret_crew_red_supply                                              {quality = 1; price = 75;};
	class gm_ge_headgear_beret_crew_blu_medical                                             {quality = 1; price = 75;};
	class gm_ge_headgear_hat_80_oli                                                         {quality = 1; price = 75;};
	class gm_ge_headgear_hat_80_m62_oli                                                     {quality = 1; price = 75;};
	class gm_ge_headgear_hat_80_gry                                                         {quality = 1; price = 75;};
	class gm_ge_headgear_hat_90_flk                                                         {quality = 1; price = 75;};
	class gm_ge_headgear_hat_90_trp                                                         {quality = 1; price = 75;};
	class gm_ge_headgear_sidecap_80_oli                                                     {quality = 1; price = 75;};
	class gm_ge_headgear_sidecap_80_m62_oli                                                 {quality = 1; price = 75;};
	class gm_ge_headgear_hat_boonie_oli                                                     {quality = 1; price = 75;};
	class gm_ge_headgear_hat_boonie_wdl                                                     {quality = 1; price = 75;};
	class gm_ge_headgear_hat_boonie_flk                                                     {quality = 1; price = 75;};
	class gm_ge_headgear_hat_boonie_trp                                                     {quality = 1; price = 75;};
	class gm_ge_headgear_hat_beanie_blk                                                     {quality = 1; price = 75;};
	class gm_ge_headgear_hat_beanie_crew_blk                                                {quality = 1; price = 75;};
	class gm_ge_headgear_winterhat_80_oli                                                   {quality = 1; price = 75;};
	class gm_ge_headgear_headset_crew_oli                                                   {quality = 1; price = 75;};
	class gm_ge_headgear_crewhat_80_blk                                                     {quality = 1; price = 75;};
	class gm_ge_pol_headgear_cap_80_grn                                                     {quality = 1; price = 75;};
	class gm_ge_pol_headgear_cap_80_wht                                                     {quality = 1; price = 75;};
	class gm_ge_dbp_headgear_cap_80_blu                                                     {quality = 1; price = 75;};
	class gm_ge_bgs_headgear_m35_53_blk                                                     {quality = 1; price = 87;};
	class gm_ge_bgs_headgear_m35_53_net_blk                                                 {quality = 1; price = 87;};
	class gm_ge_ff_headgear_m35_53_tan                                                      {quality = 1; price = 87;};
	class gm_ge_bgs_headgear_m38_72_bgr                                                     {quality = 1; price = 87;};
	class gm_ge_bgs_headgear_m38_72_goggles_bgr                                             {quality = 1; price = 87;};
	class gm_ge_headgear_sph4_oli                                                           {quality = 1; price = 75;};
	class gm_ge_headgear_m92_flk                                                            {quality = 1; price = 87;};
	class gm_ge_headgear_m92_trp                                                            {quality = 1; price = 87;};
	class gm_ge_headgear_hat_90_m92_flk                                                     {quality = 1; price = 75;};
	class gm_ge_headgear_hat_90_m92_trp                                                     {quality = 1; price = 75;};
	class gm_ge_headgear_m92_cover_win                                                      {quality = 1; price = 87;};
	class gm_ge_headgear_m92_cover_oli                                                      {quality = 1; price = 87;};
	class gm_ge_headgear_m92_cover_blk                                                      {quality = 1; price = 87;};
	class gm_ge_headgear_m92_glasses_flk                                                    {quality = 1; price = 87;};
	class gm_ge_headgear_m92_glasses_trp                                                    {quality = 1; price = 87;};
	class gm_ge_headgear_m92_cover_glasses_win                                              {quality = 1; price = 87;};
	class gm_ge_headgear_m92_cover_glasses_oli                                              {quality = 1; price = 87;};
	class gm_ge_headgear_m92_cover_glasses_blk                                              {quality = 1; price = 87;};
	class gm_ge_headgear_psh77_oli                                                          {quality = 1; price = 87;};
	class gm_ge_headgear_psh77_down_oli                                                     {quality = 1; price = 107;};
	class gm_ge_headgear_psh77_up_oli                                                       {quality = 1; price = 87;};
	class gm_ge_bgs_headgear_psh77_cover_smp                                                {quality = 1; price = 87;};
	class gm_ge_bgs_headgear_psh77_cover_down_smp                                           {quality = 1; price = 131;};
	class gm_ge_bgs_headgear_psh77_cover_up_smp                                             {quality = 1; price = 87;};
	class gm_ge_bgs_headgear_psh77_cover_str                                                {quality = 1; price = 87;};
	class gm_ge_bgs_headgear_psh77_cover_down_str                                           {quality = 1; price = 131;};
	class gm_ge_bgs_headgear_psh77_cover_up_str                                             {quality = 1; price = 87;};
	class gm_pl_headgear_wz67_oli                                                           {quality = 1; price = 87;};
	class gm_pl_army_headgear_wz67_oli                                                      {quality = 1; price = 87;};
	class gm_pl_army_headgear_wz67_net_oli                                                  {quality = 1; price = 87;};
	class gm_pl_headgear_wz67_cover_win                                                     {quality = 1; price = 87;};
	class gm_pl_army_headgear_cap_80_moro                                                   {quality = 1; price = 75;};
	class gm_pl_army_headgear_cap_80_frog                                                   {quality = 1; price = 75;};
	class gm_pl_army_headgear_wz63_oli                                                      {quality = 1; price = 87;};
	class gm_pl_army_headgear_wz63_net_oli                                                  {quality = 1; price = 87;};
	class gm_pl_headgear_beret_bdx                                                          {quality = 1; price = 75;};
	class gm_pl_headgear_beret_blu                                                          {quality = 1; price = 75;};
	class gm_pl_headgear_beret_blk                                                          {quality = 1; price = 75;};
	class gm_pl_headgear_beret_blk_empty                                                    {quality = 1; price = 75;};
	class gm_dk_headgear_m52_oli                                                            {quality = 1; price = 87;};
	class gm_dk_headgear_m52_net_oli                                                        {quality = 1; price = 87;};
	class gm_dk_headgear_m52_net_win                                                        {quality = 1; price = 87;};
	class gm_dk_headgear_m96_oli                                                            {quality = 1; price = 87;};
	class gm_dk_headgear_m96_blu                                                            {quality = 1; price = 87;};
	class gm_dk_headgear_m96_cover_m84                                                      {quality = 1; price = 87;};
	class gm_dk_headgear_m96_cover_wdl                                                      {quality = 1; price = 87;};
	class gm_dk_headgear_m96_cover_wht                                                      {quality = 1; price = 87;};
	class gm_dk_headgear_hat_boonie_m84                                                     {quality = 1; price = 75;};
	class Exile_Headgear_SantaHat					{ quality = 1; price = 10; }; //chaddles edit
	class Exile_Headgear_SafetyHelmet				{ quality = 1; price = 20; }; //chaddles edit
	//uniforms
	class gm_uniform_helper_person                                                          {quality = 1; price = 140;};
	class gm_gc_army_uniform_soldier_80_str                                                 {quality = 1; price = 180;};
	class gm_gc_army_uniform_soldier_gloves_80_str                                          {quality = 1; price = 180;};
	class gm_gc_army_uniform_soldier_80_blk                                                 {quality = 1; price = 320;};
	class gm_gc_army_uniform_soldier_80_win                                                 {quality = 1; price = 180;};
	class gm_gc_pol_uniform_dress_80_blu                                                    {quality = 1; price = 180;};
	class gm_gc_army_uniform_dress_80_gry                                                   {quality = 1; price = 180;};
	class gm_gc_airforce_uniform_pilot_80_blu                                               {quality = 1; price = 180;};
	class gm_ge_army_uniform_crew_80_oli                                                    {quality = 1; price = 180;};
	class gm_ge_army_uniform_crew_90_flk                                                    {quality = 1; price = 180;};
	class gm_ge_army_uniform_crew_90_trp                                                    {quality = 1; price = 180;};
	class gm_ge_army_uniform_pilot_oli                                                      {quality = 1; price = 300;};
	class gm_ge_pol_uniform_pilot_grn                                                       {quality = 1; price = 300;};
	class gm_ge_army_uniform_pilot_sar                                                      {quality = 1; price = 300;};
	class gm_ge_army_uniform_pilot_rolled_oli                                               {quality = 1; price = 300;};
	class gm_ge_pol_uniform_pilot_rolled_grn                                                {quality = 1; price = 300;};
	class gm_ge_army_uniform_pilot_rolled_sar                                               {quality = 1; price = 300;};
	class gm_ge_army_uniform_soldier_80_oli                                                 {quality = 1; price = 180;};
	class gm_ge_army_uniform_soldier_80_ols                                                 {quality = 1; price = 180;};
	class gm_ge_army_uniform_soldier_gloves_80_ols                                          {quality = 1; price = 180;};
	class gm_ge_army_uniform_soldier_parka_80_oli                                           {quality = 1; price = 180;};
	class gm_ge_army_uniform_soldier_parka_80_ols                                           {quality = 1; price = 180;};
	class gm_ge_army_uniform_soldier_parka_80_win                                           {quality = 1; price = 180;};
	class gm_ge_pol_uniform_suit_80_grn                                                     {quality = 1; price = 180;};
	class gm_ge_dbp_uniform_suit_80_blu                                                     {quality = 1; price = 180;};
	class gm_ge_pol_uniform_blouse_80_blk                                                   {quality = 1; price = 180;};
	class gm_ge_civ_uniform_blouse_80_gry                                                   {quality = 1; price = 180;};
	class gm_ge_bgs_uniform_soldier_80_smp                                                  {quality = 1; price = 180;};
	class gm_ge_bgs_uniform_special_80_blk                                                  {quality = 1; price = 180;};
	class gm_ge_bgs_uniform_special_80_grn                                                  {quality = 1; price = 180;};
	class gm_ge_bgs_uniform_special_rolled_80_blk                                           {quality = 1; price = 180;};
	class gm_ge_bgs_uniform_special_rolled_80_grn                                           {quality = 1; price = 180;};
	class gm_ge_ff_uniform_man_80_orn                                                       {quality = 1; price = 180;};
	class gm_ge_army_uniform_soldier_bdu_80_wdl                                             {quality = 1; price = 180;};
	class gm_ge_army_uniform_soldier_bdu_rolled_80_wdl                                      {quality = 1; price = 180;};
	class gm_xx_uniform_soldier_bdu_80_wdl                                                  {quality = 1; price = 180;};
	class gm_xx_uniform_soldier_bdu_nogloves_80_wdl                                         {quality = 1; price = 180;};
	class gm_xx_uniform_soldier_bdu_rolled_80_wdl                                           {quality = 1; price = 180;};
	class gm_xx_uniform_soldier_bdu_80_oli                                                  {quality = 1; price = 180;};
	class gm_xx_uniform_soldier_bdu_nogloves_80_oli                                         {quality = 1; price = 180;};
	class gm_xx_uniform_soldier_bdu_rolled_80_oli                                           {quality = 1; price = 180;};
	class gm_ge_uniform_soldier_tshirt_90_flk                                               {quality = 1; price = 180;};
	class gm_ge_uniform_soldier_tshirt_90_trp                                               {quality = 1; price = 180;};
	class gm_ge_uniform_soldier_tshirt_90_oli                                               {quality = 1; price = 180;};
	class gm_ge_uniform_soldier_90_flk                                                      {quality = 1; price = 180;};
	class gm_ge_uniform_soldier_90_trp                                                      {quality = 1; price = 180;};
	class gm_ge_uniform_soldier_rolled_90_flk                                               {quality = 1; price = 180;};
	class gm_ge_uniform_soldier_rolled_90_trp                                               {quality = 1; price = 180;};
	class gm_ge_uniform_pilot_commando_oli                                                  {quality = 1; price = 300;};
	class gm_ge_uniform_pilot_commando_blk                                                  {quality = 1; price = 300;};
	class gm_ge_uniform_pilot_commando_gry                                                  {quality = 1; price = 300;};
	class gm_ge_uniform_pilot_commando_rolled_oli                                           {quality = 1; price = 300;};
	class gm_ge_uniform_pilot_commando_rolled_blk                                           {quality = 1; price = 300;};
	class gm_ge_uniform_pilot_commando_rolled_gry                                           {quality = 1; price = 300;};
	class gm_pl_army_uniform_soldier_80_moro                                                {quality = 1; price = 180;};
	class gm_pl_army_uniform_soldier_rolled_80_moro                                         {quality = 1; price = 180;};
	class gm_pl_army_uniform_soldier_autumn_80_moro                                         {quality = 1; price = 180;};
	class gm_pl_army_uniform_soldier_80_frog                                                {quality = 1; price = 180;};
	class gm_pl_army_uniform_soldier_rolled_80_frog                                         {quality = 1; price = 180;};
	class gm_pl_army_uniform_soldier_80_win                                                 {quality = 1; price = 180;};
	class gm_pl_airforce_uniform_pilot_80_gry                                               {quality = 1; price = 180;};
	class gm_gc_civ_uniform_man_01_80_blk                                                   {quality = 1; price = 180;};
	class gm_gc_civ_uniform_man_01_80_blu                                                   {quality = 1; price = 180;};
	class gm_gc_civ_uniform_man_02_80_brn                                                   {quality = 1; price = 180;};
	class gm_gc_civ_uniform_man_03_80_grn                                                   {quality = 1; price = 180;};
	class gm_gc_civ_uniform_man_03_80_blu                                                   {quality = 1; price = 180;};
	class gm_gc_civ_uniform_man_03_80_gry                                                   {quality = 1; price = 180;};
	class gm_gc_civ_uniform_man_04_80_blu                                                   {quality = 1; price = 340;};
	class gm_gc_civ_uniform_man_04_80_gry                                                   {quality = 1; price = 340;};
	class gm_gc_civ_uniform_pilot_80_blk                                                    {quality = 1; price = 180;};
	class gm_dk_army_uniform_soldier_84_m84                                                 {quality = 1; price = 180;};
	class gm_dk_army_uniform_soldier_84_win                                                 {quality = 1; price = 180;};
	class gm_dk_army_uniform_soldier_84_oli                                                 {quality = 1; price = 180;};
	class gm_xx_army_uniform_fighter_01_m84                                                 {quality = 1; price = 460;};
	class gm_xx_army_uniform_fighter_01_oli                                                 {quality = 1; price = 460;};
	class gm_xx_army_uniform_fighter_01_alp                                                 {quality = 1; price = 460;};
	class gm_xx_army_uniform_fighter_02_wdl                                                 {quality = 1; price = 460;};
	class gm_xx_army_uniform_fighter_02_oli                                                 {quality = 1; price = 460;};
	class gm_xx_army_uniform_fighter_03_blk                                                 {quality = 1; price = 460;};
	class gm_xx_army_uniform_fighter_03_brn                                                 {quality = 1; price = 460;};
	class gm_xx_army_uniform_fighter_04_wdl                                                 {quality = 1; price = 460;};
	class gm_xx_army_uniform_fighter_04_grn                                                 {quality = 1; price = 460;};
	//vests
	class gm_gc_army_vest_80_belt_str                                                       {quality = 1; price = 202;};
	class gm_gc_army_vest_80_rifleman_str                                                   {quality = 1; price = 520;};
	class gm_gc_army_vest_80_leader_str                                                     {quality = 1; price = 520;};
	class gm_gc_bgs_vest_80_border_str                                                      {quality = 1; price = 520;};
	class gm_gc_army_vest_80_lmg_str                                                        {quality = 1; price = 600;};
	class gm_gc_army_vest_80_at_str                                                         {quality = 1; price = 520;};
	class gm_gc_vest_combatvest3_str                                                        {quality = 1; price = 600;};
	class gm_gc_vest_combatvest3_pol                                                        {quality = 1; price = 600;};
	class gm_ge_army_vest_80_belt                                                           {quality = 1; price = 202;};
	class gm_ge_army_vest_80_rifleman                                                       {quality = 1; price = 520;};
	class gm_ge_army_vest_80_rifleman_smg                                                   {quality = 1; price = 520;};
	class gm_ge_bgs_vest_80_rifleman                                                        {quality = 1; price = 520;};
	class gm_ge_army_vest_80_leader                                                         {quality = 1; price = 520;};
	class gm_ge_army_vest_80_leader_smg                                                     {quality = 1; price = 520;};
	class gm_ge_army_vest_80_bag                                                            {quality = 1; price = 280;};
	class gm_ge_army_vest_80_crew                                                           {quality = 1; price = 400;};
	class gm_ge_army_vest_80_demolition                                                     {quality = 1; price = 520;};
	class gm_ge_army_vest_80_machinegunner                                                  {quality = 1; price = 600;};
	class gm_ge_army_vest_80_medic                                                          {quality = 1; price = 520;};
	class gm_ge_army_vest_80_officer                                                        {quality = 1; price = 360;};
	class gm_ge_army_vest_80_mp_wht                                                         {quality = 1; price = 360;};
	class gm_ge_pol_vest_80_wht                                                             {quality = 1; price = 360;};
	class gm_ge_army_vest_80_brassard_mp                                                    {quality = 1; price = 240;};
	class gm_ge_vest_safety                                                                 {quality = 1; price = 202;};
	class gm_ge_vest_satchel_80_blk                                                         {quality = 1; price = 520;};
	class gm_ge_vest_satchel_80_san                                                         {quality = 1; price = 520;};
	class gm_ge_vest_armor_90_flk                                                           {quality = 1; price = 260;};
	class gm_ge_vest_armor_90_crew_flk                                                      {quality = 1; price = 360;};
	class gm_ge_vest_armor_90_leader_flk                                                    {quality = 1; price = 520;};
	class gm_ge_vest_armor_90_machinegunner_flk                                             {quality = 1; price = 600;};
	class gm_ge_vest_armor_90_officer_flk                                                   {quality = 1; price = 360;};
	class gm_ge_vest_armor_90_rifleman_flk                                                  {quality = 1; price = 520;};
	class gm_ge_vest_armor_90_demolition_flk                                                {quality = 1; price = 520;};
	class gm_ge_vest_armor_90_medic_flk                                                     {quality = 1; price = 520;};
	class gm_ge_vest_90_crew_flk                                                            {quality = 1; price = 360;};
	class gm_ge_vest_90_demolition_flk                                                      {quality = 1; price = 520;};
	class gm_ge_vest_90_leader_flk                                                          {quality = 1; price = 520;};
	class gm_ge_vest_90_machinegunner_flk                                                   {quality = 1; price = 600;};
	class gm_ge_vest_90_medic_flk                                                           {quality = 1; price = 520;};
	class gm_ge_vest_90_officer_flk                                                         {quality = 1; price = 360;};
	class gm_ge_vest_90_rifleman_flk                                                        {quality = 1; price = 520;};
	class gm_ge_army_vest_pilot_oli                                                         {quality = 1; price = 494;};
	class gm_ge_army_vest_pilot_pads_oli                                                    {quality = 1; price = 496;};
	class gm_ge_army_vest_type18_dpm                                                        {quality = 1; price = 592;};
	class gm_ge_bgs_vest_type18_blk                                                         {quality = 1; price = 592;};
	class gm_ge_bgs_vest_type18_grn                                                         {quality = 1; price = 592;};
	class gm_ge_bgs_vest_type3_gry                                                          {quality = 1; price = 376;};
	class gm_ge_bgs_vest_type3_oli                                                          {quality = 1; price = 376;};
	class gm_ge_bgs_vest_type3_blu                                                          {quality = 1; price = 376;};
	class gm_ge_bgs_vest_type3a1_gry                                                        {quality = 1; price = 456;};
	class gm_ge_bgs_vest_type3a1_oli                                                        {quality = 1; price = 456;};
	class gm_ge_vest_sov_80_blk                                                             {quality = 1; price = 520;};
	class gm_ge_vest_sov_80_oli                                                             {quality = 1; price = 520;};
	class gm_ge_vest_sov_80_wdl                                                             {quality = 1; price = 520;};
	class gm_ge_vest_sov_armor_80_blk                                                       {quality = 1; price = 616;};
	class gm_ge_vest_sov_armor_80_oli                                                       {quality = 1; price = 616;};
	class gm_ge_vest_sov_armor_80_wdl                                                       {quality = 1; price = 616;};
	class gm_pl_army_vest_80_rig_gry                                                        {quality = 1; price = 400;};
	class gm_pl_army_vest_80_rifleman_gry                                                   {quality = 1; price = 520;};
	class gm_pl_army_vest_80_leader_gry                                                     {quality = 1; price = 520;};
	class gm_pl_army_vest_80_marksman_gry                                                   {quality = 1; price = 520;};
	class gm_pl_army_vest_80_mg_gry                                                         {quality = 1; price = 520;};
	class gm_pl_army_vest_80_at_gry                                                         {quality = 1; price = 520;};
	class gm_pl_army_vest_80_crew_gry                                                       {quality = 1; price = 520;};
	class gm_pl_army_vest_80_rifleman_smg_gry                                               {quality = 1; price = 520;};
	class gm_dk_army_vest_54_rifleman                                                       {quality = 1; price = 520;};
	class gm_dk_army_vest_54_crew                                                           {quality = 1; price = 400;};
	class gm_dk_army_vest_54_machinegunner                                                  {quality = 1; price = 520;};
	class gm_dk_army_vest_m00_m84                                                           {quality = 1; price = 496;};
	class gm_dk_army_vest_m00_m84_rifleman                                                  {quality = 1; price = 616;};
	class gm_dk_army_vest_m00_m84_machinegunner                                             {quality = 1; price = 616;};
	class gm_dk_army_vest_m00_win                                                           {quality = 1; price = 496;};
	class gm_dk_army_vest_m00_win_rifleman                                                  {quality = 1; price = 616;};
	class gm_dk_army_vest_m00_win_machinegunner                                             {quality = 1; price = 616;};
	class gm_dk_army_vest_m00_blu                                                           {quality = 1; price = 496;};
	class gm_dk_army_vest_m00_wdl                                                           {quality = 1; price = 496;};
	class gm_dk_army_vest_m00_wdl_rifleman                                                  {quality = 1; price = 616;};
	class Exile_Vest_Snow                                                                   {quality = 1; price = 616;}; //chaddles edit
	//backpacks
	class gm_gc_army_backpack_80_assaultpack_empty_str                                      {quality = 1; price = 760;};
	class gm_gc_backpack_r105m_brn                                                          {quality = 1; price = 540;};
	class gm_ge_army_backpack_80_oli                                                        {quality = 1; price = 760;};
	class gm_ge_army_backpack_medic_80_oli                                                  {quality = 1; price = 480;};
	class gm_ge_backpack_satchel_80_blk                                                     {quality = 1; price = 590;};
	class gm_ge_backpack_satchel_80_san                                                     {quality = 1; price = 590;};
	class gm_ge_army_backpack_90_flk                                                        {quality = 1; price = 900;};
	class gm_ge_army_backpack_90_cover_win                                                  {quality = 1; price = 900;};
	class gm_ge_army_backpack_90_trp                                                        {quality = 1; price = 900;};
	class gm_ge_army_backpack_90_blk                                                        {quality = 1; price = 900;};
	class gm_ge_army_backpack_90_oli                                                        {quality = 1; price = 900;};
	class gm_ge_backpack_sem35_oli                                                          {quality = 1; price = 540;};
	class gm_pl_army_backpack_80_oli                                                        {quality = 1; price = 800;};
	class gm_dk_army_backpack_73_oli                                                        {quality = 1; price = 760;};


	///////////////////////////////////////////////////////////////////////////////
	// Ammunition
	///////////////////////////////////////////////////////////////////////////////
	/*class 100Rnd_65x39_caseless_mag 						{ quality = 1; price = 30; };
	class 100Rnd_65x39_caseless_mag_Tracer 					{ quality = 1; price = 40; };
	class 10Rnd_127x54_Mag 									{ quality = 1; price = 30; };
	// Broken in Arma
	class 10Rnd_338_Mag 									{ quality = 1; price = 30; };

	class 10Rnd_762x54_Mag 									{ quality = 1; price = 30; };
	//class 10Rnd_762x51_Mag { quality = 1; price = 30; };
	class 10Rnd_93x64_DMR_05_Mag 							{ quality = 1; price = 40; };
	class 11Rnd_45ACP_Mag 									{ quality = 1; price = 8; };
	class 150Rnd_762x54_Box 								{ quality = 1; price = 20; };
	class 150Rnd_762x54_Box_Tracer 							{ quality = 1; price = 30; };
	class 16Rnd_9x21_Mag 									{ quality = 1; price = 20; };
	class 200Rnd_65x39_cased_Box 							{ quality = 1; price = 30; };
	class 200Rnd_65x39_cased_Box_Tracer 					{ quality = 1; price = 30; };
	class 150Rnd_93x64_Mag 									{ quality = 1; price = 50; };
	class 130Rnd_338_Mag 									{ quality = 1; price = 40; };
	class 20Rnd_556x45_UW_mag 								{ quality = 1; price = 20; };
	class 20Rnd_762x51_Mag 									{ quality = 1; price = 20; };
	class 30Rnd_45ACP_Mag_SMG_01 							{ quality = 1; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green 				{ quality = 1; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow				{ quality = 1; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Red					{ quality = 1; price = 10; };
	class 30Rnd_556x45_Stanag 								{ quality = 1; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Green 					{ quality = 1; price = 20; };
	class 30Rnd_556x45_Stanag_green  						{ quality = 1; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Red 					{ quality = 1; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Yellow 				{ quality = 1; price = 20; };
	class 30Rnd_556x45_Stanag_red 							{ quality = 1; price = 20; };
	class 30Rnd_65x39_caseless_green 						{ quality = 1; price = 20; };
	class 30Rnd_65x39_caseless_green_mag_Tracer 			{ quality = 1; price = 30; };
	class 30Rnd_65x39_caseless_mag 							{ quality = 1; price = 20; };
	class 30Rnd_65x39_caseless_mag_Tracer 					{ quality = 1; price = 30; };
	class 30Rnd_9x21_Mag 									{ quality = 1; price = 40; };
	class 30Rnd_9x21_Yellow_Mag								{ quality = 1; price = 40; };
	class 30Rnd_9x21_Green_Mag								{ quality = 1; price = 40; };
	class 30Rnd_9x21_Red_Mag								{ quality = 1; price = 40; };
	class 5Rnd_127x108_APDS_Mag 							{ quality = 1; price = 50; };
	class 5Rnd_127x108_Mag 									{ quality = 1; price = 40; };
	class 6Rnd_45ACP_Cylinder 								{ quality = 1; price = 8; };
	class 6Rnd_GreenSignal_F 								{ quality = 1; price = 30; };
	class 6Rnd_RedSignal_F 									{ quality = 1; price = 30; };
	class 7Rnd_408_Mag 										{ quality = 1; price = 10; };
	class 9Rnd_45ACP_Mag 									{ quality = 1; price = 6; };
	*/

	// Price for bullet cam magazines is normal magazine price + 20 pop tabs per bullet
	/*
	class Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag 			{ quality = 1; price = 40 +  5 * 20; };
	class Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag 		{ quality = 1; price = 40 +  5 * 20; };
	class Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag 		{ quality = 1; price = 40 + 10 * 20; };
	class Exile_Magazine_7Rnd_408_Bullet_Cam_Mag 				{ quality = 1; price = 10 +  7 * 20; };
	class Exile_Magazine_10Rnd_338_Bullet_Cam_Mag 				{ quality = 1; price = 30 + 10 * 20; };
	class Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag 		{ quality = 1; price = 40 + 10 * 20; };
	class Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag 		{ quality = 1; price = 40 +  5 * 20; };
	class Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag 	{ quality = 1; price = 40 +  5 * 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Flares
	///////////////////////////////////////////////////////////////////////////////
	class Chemlight_blue							{ quality = 1; price = 2; };
	class Chemlight_green							{ quality = 1; price = 2; };
	class Chemlight_red								{ quality = 1; price = 2; };
	class FlareGreen_F								{ quality = 1; price = 6; };
	class FlareRed_F								{ quality = 1; price = 6; };
	class FlareWhite_F								{ quality = 1; price = 6; };
	class FlareYellow_F								{ quality = 1; price = 6; };
	class UGL_FlareGreen_F							{ quality = 1; price = 8; };
	class UGL_FlareRed_F							{ quality = 1; price = 8; };
	class UGL_FlareWhite_F							{ quality = 1; price = 8; };
	class UGL_FlareYellow_F							{ quality = 1; price = 8; };
	class 3Rnd_UGL_FlareGreen_F						{ quality = 1; price = 8*3; };
	class 3Rnd_UGL_FlareRed_F						{ quality = 1; price = 8*3; };
	class 3Rnd_UGL_FlareWhite_F						{ quality = 1; price = 8*3; };
	class 3Rnd_UGL_FlareYellow_F					{ quality = 1; price = 8*3; };

	///////////////////////////////////////////////////////////////////////////////
	// Smokes
	///////////////////////////////////////////////////////////////////////////////
	class SmokeShell								{ quality = 1; price = 6; };
	class SmokeShellBlue							{ quality = 1; price = 6; };
	class SmokeShellGreen							{ quality = 1; price = 6; };
	class SmokeShellOrange							{ quality = 1; price = 6; };
	class SmokeShellPurple							{ quality = 1; price = 6; };
	class SmokeShellRed								{ quality = 1; price = 6; };
	class SmokeShellYellow							{ quality = 1; price = 6; };
	class 1Rnd_Smoke_Grenade_shell					{ quality = 1; price = 8; };
	class 1Rnd_SmokeBlue_Grenade_shell				{ quality = 1; price = 8; };
	class 1Rnd_SmokeGreen_Grenade_shell				{ quality = 1; price = 8; };
	class 1Rnd_SmokeOrange_Grenade_shell			{ quality = 1; price = 8; };
	class 1Rnd_SmokePurple_Grenade_shell			{ quality = 1; price = 8; };
	class 1Rnd_SmokeRed_Grenade_shell				{ quality = 1; price = 8; };
	class 1Rnd_SmokeYellow_Grenade_shell			{ quality = 1; price = 8; };
	class 3Rnd_Smoke_Grenade_shell					{ quality = 1; price = 8*3; };
	class 3Rnd_SmokeBlue_Grenade_shell				{ quality = 1; price = 8*3; };
	class 3Rnd_SmokeGreen_Grenade_shell				{ quality = 1; price = 8*3; };
	class 3Rnd_SmokeOrange_Grenade_shell			{ quality = 1; price = 8*3; };
	class 3Rnd_SmokePurple_Grenade_shell			{ quality = 1; price = 8*3; };
	class 3Rnd_SmokeRed_Grenade_shell				{ quality = 1; price = 8*3; };
	class 3Rnd_SmokeYellow_Grenade_shell			{ quality = 1; price = 8*3; };

	///////////////////////////////////////////////////////////////////////////////
	// Explosives
	///////////////////////////////////////////////////////////////////////////////
	class HandGrenade								{ quality = 1; price = 40; };
	class MiniGrenade								{ quality = 1; price = 30; };
	class B_IR_Grenade								{ quality = 1; price = 50; };
	class O_IR_Grenade								{ quality = 1; price = 50; };
	class I_IR_Grenade								{ quality = 1; price = 50; };
	class 1Rnd_HE_Grenade_shell						{ quality = 1; price = 70; };
	class 3Rnd_HE_Grenade_shell						{ quality = 1; price = 70*3; };
	class APERSBoundingMine_Range_Mag				{ quality = 1; price = 500; };
	class APERSMine_Range_Mag						{ quality = 1; price = 600; };
	class APERSTripMine_Wire_Mag					{ quality = 1; price = 300; };
	class ClaymoreDirectionalMine_Remote_Mag		{ quality = 1; price = 350; };
	class DemoCharge_Remote_Mag						{ quality = 1; price = 700; };
	class IEDLandBig_Remote_Mag						{ quality = 1; price = 600; };
	class IEDLandSmall_Remote_Mag					{ quality = 1; price = 300; };
	class IEDUrbanBig_Remote_Mag					{ quality = 1; price = 800; };
	class IEDUrbanSmall_Remote_Mag					{ quality = 1; price = 400; };
	class SatchelCharge_Remote_Mag					{ quality = 1; price = 1000; };
	class SLAMDirectionalMine_Wire_Mag				{ quality = 1; price = 700; };
	///////////////////////////////////////////////////////////////////////////////
	// Pistols
	///////////////////////////////////////////////////////////////////////////////
	class hgun_ACPC2_F 								{ quality = 1; price = 50; };
	class hgun_P07_F 								{ quality = 1; price = 50; };
	class hgun_Pistol_heavy_01_F 					{ quality = 1; price = 80; };
	class hgun_Pistol_heavy_02_F 					{ quality = 1; price = 80; };
	class hgun_Pistol_Signal_F 						{ quality = 1; price = 100; };
	class hgun_Rook40_F 							{ quality = 1; price = 50; };

	///////////////////////////////////////////////////////////////////////////////
	// Sub Machine Guns
	///////////////////////////////////////////////////////////////////////////////
	class hgun_PDW2000_F 							{ quality = 1; price = 100; };
	class SMG_01_F 									{ quality = 1; price = 150; };
	class SMG_02_F 									{ quality = 1; price = 150; };

	///////////////////////////////////////////////////////////////////////////////
	// Light Machine Guns
	///////////////////////////////////////////////////////////////////////////////
	class arifle_MX_SW_Black_F						{ quality = 1; price = 250; };
	class arifle_MX_SW_F							{ quality = 1; price = 250; };
	class LMG_Mk200_F								{ quality = 1; price = 300; };
	class LMG_Zafir_F								{ quality = 1; price = 350; };
	class MMG_01_hex_F								{ quality = 1; price = 800; };
	class MMG_01_tan_F								{ quality = 1; price = 800; };
	class MMG_02_black_F							{ quality = 1; price = 450; };
	class MMG_02_camo_F								{ quality = 1; price = 450; };
	class MMG_02_sand_F								{ quality = 1; price = 450; };

	///////////////////////////////////////////////////////////////////////////////
	// Assault Rifles
	///////////////////////////////////////////////////////////////////////////////
	class arifle_Katiba_C_F							{ quality = 1; price = 150; };
	class arifle_Katiba_F							{ quality = 1; price = 150; };
	class arifle_Katiba_GL_F						{ quality = 1; price = 200; };
	class arifle_Mk20_F								{ quality = 1; price = 150; };
	class arifle_Mk20_GL_F							{ quality = 1; price = 200; };
	class arifle_Mk20_GL_plain_F					{ quality = 1; price = 200; };
	class arifle_Mk20_plain_F						{ quality = 1; price = 150; };
	class arifle_Mk20C_F							{ quality = 1; price = 150; };
	class arifle_Mk20C_plain_F						{ quality = 1; price = 150; };
	class arifle_MX_Black_F							{ quality = 1; price = 450; };
	class arifle_MX_F								{ quality = 1; price = 450; };
	class arifle_MX_GL_Black_F						{ quality = 1; price = 450; };
	class arifle_MX_GL_F							{ quality = 1; price = 450; };
	class arifle_MXC_Black_F						{ quality = 1; price = 350; };
	class arifle_MXC_F								{ quality = 1; price = 350; };
	class arifle_SDAR_F								{ quality = 1; price = 650; };
	class arifle_TRG20_F							{ quality = 1; price = 250; };
	class arifle_TRG21_F							{ quality = 1; price = 250; };
	class arifle_TRG21_GL_F							{ quality = 1; price = 350; };

	///////////////////////////////////////////////////////////////////////////////
	// Sniper Rifles
	///////////////////////////////////////////////////////////////////////////////
	class arifle_MXM_Black_F 						{ quality = 1; price = 550; };
	class arifle_MXM_F 								{ quality = 1; price = 550; };
	class srifle_DMR_01_F 							{ quality = 1; price = 600; };
	class srifle_DMR_02_camo_F 						{ quality = 1; price = 800; };
	class srifle_DMR_02_F 							{ quality = 1; price = 800; };
	class srifle_DMR_02_sniper_F 					{ quality = 1; price = 800; };
	class srifle_DMR_03_F 							{ quality = 1; price = 750; };
	class srifle_DMR_03_khaki_F 					{ quality = 1; price = 750; };
	class srifle_DMR_03_multicam_F 					{ quality = 1; price = 750; };
	class srifle_DMR_03_tan_F 						{ quality = 1; price = 750; };
	class srifle_DMR_03_woodland_F 					{ quality = 1; price = 750; };
	class srifle_DMR_04_F 							{ quality = 1; price = 700; };
	class srifle_DMR_04_Tan_F 						{ quality = 1; price = 700; };
	class srifle_DMR_05_blk_F 						{ quality = 1; price = 850; };
	class srifle_DMR_05_hex_F 						{ quality = 1; price = 850; };
	class srifle_DMR_05_tan_f 						{ quality = 1; price = 850; };
	class srifle_DMR_06_camo_F 						{ quality = 1; price = 800; };
	class srifle_DMR_06_olive_F 					{ quality = 1; price = 800; };
	class srifle_EBR_F 								{ quality = 1; price = 700; };
	class srifle_GM6_camo_F 						{ quality = 1; price = 900; };
	class srifle_GM6_F 								{ quality = 1; price = 900; };
	class srifle_LRR_camo_F 						{ quality = 1; price = 850; };
	class srifle_LRR_F 								{ quality = 1; price = 850; };
	*/
	///////////////////////////////////////////////////////////////////////////////
	// ArmA 2 Weapons
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Weapon_AK107						{ quality = 1; price = 300; };
	class Exile_Weapon_AK107_GL						{ quality = 1; price = 400; };
	class Exile_Weapon_AK74							{ quality = 1; price = 350; };
	class Exile_Weapon_AK74_GL						{ quality = 1; price = 400; };
	class Exile_Weapon_AK47							{ quality = 1; price = 500; };
	class Exile_Weapon_AKM							{ quality = 1; price = 500; };
	class Exile_Weapon_AKS							{ quality = 1; price = 500; };
	class Exile_Weapon_AKS_Gold						{ quality = 1; price = 550; };
	class Exile_Weapon_DMR							{ quality = 1; price = 650; };
	class Exile_Weapon_LeeEnfield					{ quality = 1; price = 250; };
	class Exile_Weapon_CZ550						{ quality = 1; price = 400; };
	class Exile_Weapon_SVD							{ quality = 1; price = 800; };
	class Exile_Weapon_SVDCamo						{ quality = 1; price = 850; };
	class Exile_Weapon_VSSVintorez					{ quality = 1; price = 600; };
	class Exile_Weapon_RPK							{ quality = 1; price = 250; };
	class Exile_Weapon_PK							{ quality = 1; price = 300; };
	class Exile_Weapon_PKP							{ quality = 1; price = 350; };
	class Exile_Weapon_Colt1911						{ quality = 1; price = 100; };
	class Exile_Weapon_Makarov						{ quality = 1; price = 100; };
	class Exile_Weapon_Taurus						{ quality = 1; price = 100; };
	class Exile_Weapon_TaurusGold					{ quality = 1; price = 150; };
	class Exile_Weapon_M1014						{ quality = 1; price = 200; };
	class Exile_Weapon_SA61							{ quality = 1; price = 150; };
	class Exile_Weapon_m107							{ quality = 1; price = 850; };
	class Exile_Weapon_ksvk							{ quality = 1; price = 850; };
	class Exile_Weapon_M4							{ quality = 1; price = 300; };
	class Exile_Weapon_M16A4						{ quality = 1; price = 350; };
	class Exile_Weapon_M16A2						{ quality = 1; price = 300; };

	///////////////////////////////////////////////////////////////////////////////
	// ArmA 2 Ammunition
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Magazine_30Rnd_762x39_AK				{ quality = 1; price = 20; };
	class Exile_Magazine_30Rnd_545x39_AK				{ quality = 1; price = 20; };
	class Exile_Magazine_30Rnd_545x39_AK_Green			{ quality = 1; price = 20; };
	class Exile_Magazine_30Rnd_545x39_AK_Red			{ quality = 1; price = 20; };
	class Exile_Magazine_30Rnd_545x39_AK_White			{ quality = 1; price = 20; };
	class Exile_Magazine_30Rnd_545x39_AK_Yellow			{ quality = 1; price = 20; };
	class Exile_Magazine_45Rnd_545x39_RPK_Green			{ quality = 1; price = 20; };
	class Exile_Magazine_75Rnd_545x39_RPK_Green			{ quality = 1; price = 20; };
	class Exile_Magazine_20Rnd_762x51_DMR				{ quality = 1; price = 20; };
	class Exile_Magazine_20Rnd_762x51_DMR_Yellow		{ quality = 1; price = 20; };
	class Exile_Magazine_20Rnd_762x51_DMR_Red			{ quality = 1; price = 20; };
	class Exile_Magazine_20Rnd_762x51_DMR_Green			{ quality = 1; price = 20; };
	class Exile_Magazine_10Rnd_303						{ quality = 1; price = 20; };
	class Exile_Magazine_100Rnd_762x54_PK_Green			{ quality = 1; price = 20; };
	class Exile_Magazine_7Rnd_45ACP						{ quality = 1; price = 20; };
	class Exile_Magazine_8Rnd_9x18						{ quality = 1; price = 20; };
	class Exile_Magazine_6Rnd_45ACP						{ quality = 1; price = 20; };
	class Exile_Magazine_5Rnd_22LR						{ quality = 1; price = 20; };
	class Exile_Magazine_10Rnd_762x54					{ quality = 1; price = 20; };
	class Exile_Magazine_10Rnd_9x39						{ quality = 1; price = 20; };
	class Exile_Magazine_20Rnd_9x39						{ quality = 1; price = 20; };
	class Exile_Magazine_8Rnd_74Slug					{ quality = 1; price = 20; };
	class Exile_Magazine_8Rnd_74Pellets					{ quality = 1; price = 20; }; // broken?
	class Exile_Magazine_10Rnd_765x17_SA61				{ quality = 1; price = 10; };
	class Exile_Magazine_20Rnd_765x17_SA61				{ quality = 1; price = 20; };
	class Exile_Magazine_10Rnd_127x99_m107				{ quality = 1; price = 30; };
	class Exile_Magazine_5Rnd_127x108_APDS_KSVK			{ quality = 1; price = 40; };
	class Exile_Magazine_5Rnd_127x108_KSVK				{ quality = 1; price = 30; };

	/*
	///////////////////////////////////////////////////////////////////////////////
	// Apex Items & Weapons
	///////////////////////////////////////////////////////////////////////////////
	class hgun_Pistol_01_F            { quality = 1; price = 65; };
	class hgun_P07_khk_F              { quality = 1; price = 65; };
	class SMG_05_F					  { quality = 1; price = 150; };
	class LMG_03_F					  { quality = 1; price = 300; };
	class arifle_MX_khk_F             { quality = 1; price = 450; };
	class arifle_MX_GL_khk_F          { quality = 1; price = 500; };
	class arifle_MXC_khk_F            { quality = 1; price = 350; };
	class arifle_MXM_khk_F            { quality = 1; price = 500; };
	class srifle_LRR_tna_F            { quality = 1; price = 850; };
	class srifle_GM6_ghex_F           { quality = 1; price = 900; };
	class srifle_DMR_07_blk_F         { quality = 1; price = 750; };
	class srifle_DMR_07_hex_F         { quality = 1; price = 750; };
	class srifle_DMR_07_ghex_F        { quality = 1; price = 750; };
	class arifle_AK12_F               { quality = 1; price = 650; };
	class arifle_AK12_GL_F            { quality = 1; price = 700; };
	class arifle_AKM_F                { quality = 1; price = 400; };
	class arifle_AKM_FL_F             { quality = 1; price = 400; };
	class arifle_AKS_F                { quality = 1; price = 350; };
	class arifle_ARX_blk_F            { quality = 1; price = 900; };
	class arifle_ARX_ghex_F           { quality = 1; price = 900; };
	class arifle_ARX_hex_F            { quality = 1; price = 900; };
	class arifle_CTAR_blk_F           { quality = 1; price = 450; };
	class arifle_CTAR_hex_F           { quality = 1; price = 450; };
	class arifle_CTAR_ghex_F          { quality = 1; price = 450; };
	class arifle_CTAR_GL_blk_F        { quality = 1; price = 450; };
	class arifle_CTAR_GL_ghex_F       { quality = 1; price = 450; };
	class arifle_CTAR_GL_hex_F        { quality = 1; price = 450; };
	class arifle_CTARS_blk_F          { quality = 1; price = 450; };
	class arifle_CTARS_ghex_F         { quality = 1; price = 450; };
	class arifle_CTARS_hex_F          { quality = 1; price = 450; };
	class arifle_SPAR_01_blk_F        { quality = 1; price = 400; };
	class arifle_SPAR_01_khk_F        { quality = 1; price = 400; };
	class arifle_SPAR_01_snd_F        { quality = 1; price = 400; };
	class arifle_SPAR_01_GL_blk_F     { quality = 1; price = 500; };
	class arifle_SPAR_01_GL_khk_F     { quality = 1; price = 500; };
	class arifle_SPAR_01_GL_snd_F     { quality = 1; price = 500; };
	class arifle_SPAR_02_blk_F        { quality = 1; price = 550; };
	class arifle_SPAR_02_khk_F        { quality = 1; price = 550; };
	class arifle_SPAR_02_snd_F        { quality = 1; price = 550; };
	class arifle_SPAR_03_blk_F        { quality = 1; price = 600; };
	class arifle_SPAR_03_khk_F        { quality = 1; price = 600; };
	class arifle_SPAR_03_snd_F        { quality = 1; price = 600; };
	class muzzle_snds_H_khk_F         { quality = 1; price = 50; };
	class muzzle_snds_H_snd_F         { quality = 1; price = 50; };
	class muzzle_snds_58_blk_F        { quality = 1; price = 20; };
	class muzzle_snds_m_khk_F         { quality = 1; price = 15; };
	class muzzle_snds_m_snd_F         { quality = 1; price = 15; };
	class muzzle_snds_B_khk_F         { quality = 1; price = 50; };
	class muzzle_snds_B_snd_F         { quality = 1; price = 50; };
	class muzzle_snds_58_wdm_F        { quality = 1; price = 20; };
	class muzzle_snds_65_TI_blk_F     { quality = 1; price = 75; };
	class muzzle_snds_65_TI_hex_F     { quality = 1; price = 75; };
	class muzzle_snds_65_TI_ghex_F    { quality = 1; price = 75; };
	class muzzle_snds_H_MG_blk_F      { quality = 1; price = 20; };
	class muzzle_snds_H_MG_khk_F      { quality = 1; price = 20; };
	class optic_Arco_blk_F            { quality = 1; price = 100; };
	class optic_Arco_ghex_F           { quality = 1; price = 100; };
	class optic_DMS_ghex_F            { quality = 1; price = 150; };
	class optic_Hamr_khk_F            { quality = 1; price = 200; };
	class optic_ERCO_blk_F            { quality = 1; price = 125; };
	class optic_ERCO_khk_F            { quality = 1; price = 125; };
	class optic_ERCO_snd_F            { quality = 1; price = 125; };
	class optic_SOS_khk_F             { quality = 1; price = 200; };
	class optic_LRPS_tna_F            { quality = 1; price = 300; };
	class optic_LRPS_ghex_F           { quality = 1; price = 300; };
	class optic_Holosight_blk_F       { quality = 1; price = 50; };
	class optic_Holosight_khk_F       { quality = 1; price = 50; };
	class optic_Holosight_smg_blk_F   { quality = 1; price = 50; };
	class bipod_01_F_khk              { quality = 1; price = 10; };
	class O_NVGoggles_hex_F           { quality = 1; price = 150; };
	class O_NVGoggles_urb_F           { quality = 1; price = 150; };
	class O_NVGoggles_ghex_F          { quality = 1; price = 150; };
	class NVGoggles_tna_F             { quality = 1; price = 100; };
	//class NVGogglesB_blk_F            { quality = 1; price = 1000; }; //Normal NightV but fullscreen thermal
	//class NVGogglesB_grn_F            { quality = 1; price = 1000; };	//Normal NightV but fullscreen thermal
	//class NVGogglesB_gry_F            { quality = 1; price = 1000; };	//Normal NightV but fullscreen thermal
	//class Laserdesignator_01_khk_F    { quality = 1; price = 1000; };	//Thermal
	//class Laserdesignator_02_ghex_F   { quality = 1; price = 1000; };	//Thermal
	class U_B_T_Soldier_F             { quality = 1; price = 40; };
	class U_B_T_Soldier_AR_F          { quality = 1; price = 40; };
	class U_B_T_Soldier_SL_F          { quality = 1; price = 40; };
	class U_B_T_Sniper_F              { quality = 1; price = 100; };
	class U_B_T_FullGhillie_tna_F     { quality = 1; price = 150; };
	class U_B_CTRG_Soldier_F          { quality = 1; price = 40; };
	class U_B_CTRG_Soldier_2_F        { quality = 1; price = 40; };
	class U_B_CTRG_Soldier_3_F        { quality = 1; price = 40; };
	class U_B_GEN_Soldier_F           { quality = 1; price = 35; };
	class U_B_GEN_Commander_F         { quality = 1; price = 35; };
	class U_O_T_Soldier_F             { quality = 1; price = 40; };
	class U_O_T_Officer_F             { quality = 1; price = 40; };
	class U_O_T_Sniper_F              { quality = 1; price = 100; };
	class U_O_T_FullGhillie_tna_F     { quality = 1; price = 150; };
	class U_O_V_Soldier_Viper_F       { quality = 1; price = 150; };
	class U_O_V_Soldier_Viper_hex_F   { quality = 1; price = 150; };
	class U_I_C_Soldier_Para_1_F      { quality = 1; price = 30; };
	class U_I_C_Soldier_Para_2_F      { quality = 1; price = 30; };
	class U_I_C_Soldier_Para_3_F      { quality = 1; price = 30; };
	class U_I_C_Soldier_Para_4_F      { quality = 1; price = 30; };
	class U_I_C_Soldier_Para_5_F      { quality = 1; price = 30; };
	class U_I_C_Soldier_Bandit_1_F    { quality = 1; price = 15; };
	class U_I_C_Soldier_Bandit_2_F    { quality = 1; price = 15; };
	class U_I_C_Soldier_Bandit_3_F    { quality = 1; price = 15; };
	class U_I_C_Soldier_Bandit_4_F    { quality = 1; price = 15; };
	class U_I_C_Soldier_Bandit_5_F    { quality = 1; price = 15; };
	class U_I_C_Soldier_Camo_F        { quality = 1; price = 30; };
	class U_C_man_sport_1_F           { quality = 1; price = 10; };
	class U_C_man_sport_2_F           { quality = 1; price = 10; };
	class U_C_man_sport_3_F           { quality = 1; price = 10; };
	class U_C_Man_casual_1_F          { quality = 1; price = 10; };
	class U_C_Man_casual_2_F          { quality = 1; price = 10; };
	class U_C_Man_casual_3_F          { quality = 1; price = 10; };
	class U_C_Man_casual_4_F          { quality = 1; price = 10; };
	class U_C_Man_casual_5_F          { quality = 1; price = 10; };
	class U_C_Man_casual_6_F          { quality = 1; price = 10; };
	class U_B_CTRG_Soldier_urb_1_F    { quality = 1; price = 40; };
	class U_B_CTRG_Soldier_urb_2_F    { quality = 1; price = 40; };
	class U_B_CTRG_Soldier_urb_3_F    { quality = 1; price = 40; };
	class H_Helmet_Skate              { quality = 1; price = 20; };
	class H_HelmetB_TI_tna_F          { quality = 1; price = 100; };
	//class H_HelmetO_ViperSP_hex_F     { quality = 1; price = 1000; };		//Themal
	//class H_HelmetO_ViperSP_ghex_F    { quality = 1; price = 1000; }; 	//Themal
	class H_HelmetB_tna_F             { quality = 1; price = 50; };
	class H_HelmetB_Enh_tna_F         { quality = 1; price = 100; };
	class H_HelmetB_Light_tna_F       { quality = 1; price = 20; };
	class H_HelmetSpecO_ghex_F        { quality = 1; price = 100; };
	class H_HelmetLeaderO_ghex_F      { quality = 1; price = 175; };
	class H_HelmetO_ghex_F            { quality = 1; price = 75; };
	class H_HelmetCrew_O_ghex_F       { quality = 1; price = 75; };
	class H_MilCap_tna_F              { quality = 1; price = 8; };
	class H_MilCap_ghex_F             { quality = 1; price = 8; };
	class H_Booniehat_tna_F           { quality = 1; price = 4; };
	class H_Beret_gen_F               { quality = 1; price = 12; };
	class H_MilCap_gen_F              { quality = 1; price = 10; };
	class H_Cap_oli_Syndikat_F        { quality = 1; price = 6; };
	class H_Cap_tan_Syndikat_F        { quality = 1; price = 6; };
	class H_Cap_blk_Syndikat_F        { quality = 1; price = 6; };
	class H_Cap_grn_Syndikat_F        { quality = 1; price = 6; };
	class H_FakeHeadgear_Syndikat_F   { quality = 1; price = 6; };
	class V_TacChestrig_grn_F         { quality = 1; price = 15; };
	class V_TacChestrig_oli_F         { quality = 1; price = 15; };
	class V_TacChestrig_cbr_F         { quality = 1; price = 15; };
	class V_PlateCarrier1_tna_F       { quality = 1; price = 50; };
	class V_PlateCarrier2_tna_F       { quality = 1; price = 60; };
	class V_PlateCarrierSpec_tna_F    { quality = 1; price = 100; };
	class V_PlateCarrierGL_tna_F      { quality = 1; price = 500; };
	class V_HarnessO_ghex_F           { quality = 1; price = 50; };
	class V_HarnessOGL_ghex_F         { quality = 1; price = 30; };
	class V_BandollierB_ghex_F        { quality = 1; price = 10; };
	class V_TacVest_gen_F             { quality = 1; price = 25; };
	class V_PlateCarrier1_rgr_noflag_F		{ quality = 1; price = 50; };
	class V_PlateCarrier2_rgr_noflag_F		{ quality = 1; price = 60; };
	class B_Bergen_Base_F					{ quality = 1; price = 400; };
	class B_Bergen_mcamo_F                  { quality = 1; price = 400; };
	class B_Bergen_dgtl_F                   { quality = 1; price = 400; };
	class B_Bergen_hex_F                    { quality = 1; price = 400; };
	class B_Bergen_tna_F                    { quality = 1; price = 400; };
	class B_AssaultPack_tna_F               { quality = 1; price = 90; };
	class B_Carryall_ghex_F                 { quality = 1; price = 300; };
	class B_FieldPack_ghex_F                { quality = 1; price = 120; };
	class B_ViperHarness_base_F             { quality = 1; price = 250; };
	class B_ViperHarness_blk_F              { quality = 1; price = 250; };
	class B_ViperHarness_ghex_F             { quality = 1; price = 250; };
	class B_ViperHarness_hex_F              { quality = 1; price = 250; };
	class B_ViperHarness_khk_F              { quality = 1; price = 250; };
	class B_ViperHarness_oli_F              { quality = 1; price = 250; };
	class B_ViperLightHarness_base_F        { quality = 1; price = 200; };
	class B_ViperLightHarness_blk_F         { quality = 1; price = 200; };
	class B_ViperLightHarness_ghex_F        { quality = 1; price = 200; };
	class B_ViperLightHarness_hex_F         { quality = 1; price = 200; };
	class B_ViperLightHarness_khk_F         { quality = 1; price = 200; };
	class B_ViperLightHarness_oli_F         { quality = 1; price = 200; };

	class 30Rnd_9x21_Mag_SMG_02						{quality = 1; price = 10; };
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Red          {quality = 1; price = 15; };
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Yellow       {quality = 1; price = 15; };
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Green        {quality = 1; price = 15; };
	class 30Rnd_580x42_Mag_F                        {quality = 1; price = 15; };
	class 30Rnd_580x42_Mag_Tracer_F                 {quality = 1; price = 15; };
	class 100Rnd_580x42_Mag_F                       {quality = 1; price = 15; };
	class 100Rnd_580x42_Mag_Tracer_F                {quality = 1; price = 15; };
	class 20Rnd_650x39_Cased_Mag_F                  {quality = 1; price = 20; };
	class 10Rnd_50BW_Mag_F                          {quality = 1; price = 35; };
	class 150Rnd_556x45_Drum_Mag_F                  {quality = 1; price = 75; };
	class 150Rnd_556x45_Drum_Mag_Tracer_F           {quality = 1; price = 75; };
	class 30Rnd_762x39_Mag_F                        {quality = 1; price = 25; };
	class 30Rnd_762x39_Mag_Green_F                  {quality = 1; price = 25; };
	class 30Rnd_762x39_Mag_Tracer_F                 {quality = 1; price = 25; };
	class 30Rnd_762x39_Mag_Tracer_Green_F           {quality = 1; price = 25; };
	class 30Rnd_545x39_Mag_F                        {quality = 1; price = 10; };
	class 30Rnd_545x39_Mag_Green_F                  {quality = 1; price = 10; };
	class 30Rnd_545x39_Mag_Tracer_F                 {quality = 1; price = 10; };
	class 30Rnd_545x39_Mag_Tracer_Green_F           {quality = 1; price = 10; };
	class 200Rnd_556x45_Box_F                       {quality = 1; price = 90; };
	class 200Rnd_556x45_Box_Red_F                   {quality = 1; price = 90; };
	class 200Rnd_556x45_Box_Tracer_F                {quality = 1; price = 90; };
	class 200Rnd_556x45_Box_Tracer_Red_F            {quality = 1; price = 90; };
	class 10Rnd_9x21_Mag							{quality = 1; price = 10; };
	
	// Jets DLC items
	class V_DeckCrew_yellow_F						{ quality = 1; price = 30; };
	class V_DeckCrew_blue_F							{ quality = 1; price = 30; };
	class V_DeckCrew_green_F						{ quality = 1; price = 30; };
	class V_DeckCrew_red_F							{ quality = 1; price = 30; };
	class V_DeckCrew_white_F						{ quality = 1; price = 30; };
	class V_DeckCrew_brown_F						{ quality = 1; price = 30; };
	class V_DeckCrew_violet_F						{ quality = 1; price = 30; };
	*/

	//GM weapons mod start chaddles edit
	class gm_100Rnd_762x51mm_B_T_DM21_mg8_oli       {quality = 1; price = 150;};
	class gm_100Rnd_762x51mm_B_T_DM21A1_mg8_oli       {quality = 1; price = 150;};
	class gm_100Rnd_762x51mm_B_T_DM21A2_mg8_oli       {quality = 1; price = 150;};
	class gm_100Rnd_762x54mm_API_b32_pk_grn       {quality = 1; price = 150;};
	class gm_100Rnd_762x54mm_B_T_t46_pk_grn       {quality = 1; price = 150;};
	class gm_100Rnd_762x54mmR_API_7bz3_pk_grn       {quality = 1; price = 150;};
	class gm_100Rnd_762x54mmR_B_T_7t2_pk_grn       {quality = 1; price = 150;};
	class gm_10Rnd_762x51mm_AP_DM151_g3_blk       {quality = 1; price = 150;};
	class gm_10Rnd_762x51mm_B_DM111_g3_blk       {quality = 1; price = 150;};
	class gm_10Rnd_762x51mm_B_DM41_g3_blk       {quality = 1; price = 150;};
	class gm_10Rnd_762x51mm_B_T_DM21_g3_blk       {quality = 1; price = 150;};
	class gm_10Rnd_762x51mm_B_T_DM21A1_g3_blk       {quality = 1; price = 150;};
	class gm_10Rnd_762x51mm_B_T_DM21A2_g3_blk       {quality = 1; price = 150;};
	class gm_10Rnd_762x54mmR_AP_7N1_svd_blk       {quality = 1; price = 150;};
	class gm_10Rnd_762x54mmR_API_7bz3_svd_blk       {quality = 1; price = 150;};
	class gm_10Rnd_762x54mmR_B_T_7t2_svd_blk       {quality = 1; price = 150;};
	class gm_120Rnd_762x51mm_B_T_DM21_mg3_grn       {quality = 1; price = 150;};
	class gm_120Rnd_762x51mm_B_T_DM21A1_mg3_grn       {quality = 1; price = 150;};
	class gm_120Rnd_762x51mm_B_T_DM21A2_mg3_grn       {quality = 1; price = 150;};
	class gm_1rnd_67mm_heat_dm22a1_g3       {quality = 1; price = 150;};
	class gm_20Rnd_556x45mm_B_M193_stanag_gry       {quality = 1; price = 150;};
	class gm_20Rnd_556x45mm_B_M855_stanag_gry       {quality = 1; price = 150;};
	class gm_20Rnd_556x45mm_B_T_M196_stanag_gry       {quality = 1; price = 150;};
	class gm_20Rnd_556x45mm_B_T_M856_stanag_gry       {quality = 1; price = 150;};
	class gm_20Rnd_762x51mm_AP_DM151_g3_blk       {quality = 1; price = 150;};
	class gm_20Rnd_762x51mm_ap_DM151_g3_des       {quality = 1; price = 150;};
	class gm_20Rnd_762x51mm_AP_DM151_sg542_blk       {quality = 1; price = 150;};
	class gm_20Rnd_762x51mm_B_DM111_g3_blk       {quality = 1; price = 150;};
	class gm_20Rnd_762x51mm_b_DM111_g3_des       {quality = 1; price = 150;};
	class gm_20Rnd_762x51mm_B_DM111_sg542_blk       {quality = 1; price = 150;};
	class gm_20Rnd_762x51mm_B_DM41_g3_blk       {quality = 1; price = 150;};
	class gm_20Rnd_762x51mm_b_DM41_g3_des       {quality = 1; price = 150;};
	class gm_20Rnd_762x51mm_B_DM41_sg542_blk       {quality = 1; price = 150;};
	class gm_20Rnd_762x51mm_B_T_DM21_g3_blk       {quality = 1; price = 150;};
	class gm_20Rnd_762x51mm_b_t_DM21_g3_des       {quality = 1; price = 150;};
	class gm_20Rnd_762x51mm_B_T_DM21_g3_gold       {quality = 1; price = 150;};
	class gm_20Rnd_762x51mm_B_T_DM21_sg542_blk       {quality = 1; price = 150;};
	class gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk       {quality = 1; price = 150;};
	class gm_20Rnd_762x51mm_b_t_DM21A1_g3_des       {quality = 1; price = 150;};
	class gm_20Rnd_762x51mm_B_T_DM21A1_sg542_blk       {quality = 1; price = 150;};
	class gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk       {quality = 1; price = 150;};
	class gm_20Rnd_762x51mm_b_t_DM21A2_g3_des       {quality = 1; price = 150;};
	class gm_20Rnd_762x51mm_B_T_DM21A2_sg542_blk       {quality = 1; price = 150;};
	class gm_30Rnd_545x39mm_B_7N6_ak74_blk       {quality = 1; price = 150;};
	class gm_30Rnd_545x39mm_B_7N6_ak74_org       {quality = 1; price = 150;};
	class gm_30Rnd_545x39mm_B_7N6_ak74_prp       {quality = 1; price = 150;};
	class gm_30Rnd_545x39mm_B_T_7T3_ak74_blk       {quality = 1; price = 150;};
	class gm_30Rnd_545x39mm_B_T_7T3_ak74_org       {quality = 1; price = 150;};
	class gm_30Rnd_545x39mm_B_T_7T3_ak74_prp       {quality = 1; price = 150;};
	class gm_30Rnd_556x45mm_B_DM11_g36_blk       {quality = 1; price = 150;};
	class gm_30Rnd_556x45mm_b_dm11_g36_des       {quality = 1; price = 150;};
	class gm_30Rnd_556x45mm_B_DM11_hk33_blk       {quality = 1; price = 150;};
	class gm_30Rnd_556x45mm_B_DM11_sg550_brn       {quality = 1; price = 150;};
	class gm_30Rnd_556x45mm_B_M193_stanag_gry       {quality = 1; price = 150;};
	class gm_30Rnd_556x45mm_B_M855_stanag_gry       {quality = 1; price = 150;};
	class gm_30Rnd_556x45mm_B_T_DM21_g36_blk       {quality = 1; price = 150;};
	class gm_30Rnd_556x45mm_b_t_dm21_g36_des       {quality = 1; price = 150;};
	class gm_30Rnd_556x45mm_B_T_DM21_hk33_blk       {quality = 1; price = 150;};
	class gm_30Rnd_556x45mm_B_T_DM21_sg550_brn       {quality = 1; price = 150;};
	class gm_30Rnd_556x45mm_B_T_M196_stanag_gry       {quality = 1; price = 150;};
	class gm_30Rnd_556x45mm_B_T_M856_stanag_gry       {quality = 1; price = 150;};
	class gm_30Rnd_762x39mm_AP_7N23_ak47_blk       {quality = 1; price = 150;};
	class gm_30Rnd_762x39mm_AP_7N23_akm_blk       {quality = 1; price = 150;};
	class gm_30Rnd_762x39mm_AP_7N23_akm_org       {quality = 1; price = 150;};
	class gm_30Rnd_762x39mm_AP_7N23_mpikm_blk       {quality = 1; price = 150;};
	class gm_30Rnd_762x39mm_B_57N231_ak47_blk       {quality = 1; price = 150;};
	class gm_30Rnd_762x39mm_B_57N231_akm_blk       {quality = 1; price = 150;};
	class gm_30Rnd_762x39mm_B_57N231_akm_org       {quality = 1; price = 150;};
	class gm_30Rnd_762x39mm_B_57N231_mpikm_blk       {quality = 1; price = 150;};
	class gm_30Rnd_762x39mm_B_M43_ak47_blk       {quality = 1; price = 150;};
	class gm_30Rnd_762x39mm_B_T_57N231P_ak47_blk       {quality = 1; price = 150;};
	class gm_30Rnd_762x39mm_B_T_57N231P_akm_blk       {quality = 1; price = 150;};
	class gm_30Rnd_762x39mm_B_T_57N231P_akm_org       {quality = 1; price = 150;};
	class gm_30Rnd_762x39mm_B_T_57N231P_mpikm_blk       {quality = 1; price = 150;};
	class gm_30Rnd_762x39mm_B_T_M43_ak47_blk       {quality = 1; price = 150;};
	class gm_30Rnd_762x39mm_BSD_57N231U_ak47_blk       {quality = 1; price = 150;};
	class gm_30Rnd_762x39mm_BSD_57N231U_akm_blk       {quality = 1; price = 150;};
	class gm_30Rnd_762x39mm_BSD_57N231U_akm_org       {quality = 1; price = 150;};
	class gm_30Rnd_762x39mm_BSD_57N231U_mpikm_blk       {quality = 1; price = 150;};
	class gm_30Rnd_9x19mm_AP_DM91_mp5_blk       {quality = 1; price = 150;};
	class gm_30Rnd_9x19mm_AP_DM91_mp5a3_blk       {quality = 1; price = 150;};
	class gm_30Rnd_9x19mm_B_DM11_mp5_blk       {quality = 1; price = 150;};
	class gm_30Rnd_9x19mm_B_DM11_mp5a3_blk       {quality = 1; price = 150;};
	class gm_30Rnd_9x19mm_B_DM51_mp5_blk       {quality = 1; price = 150;};
	class gm_30Rnd_9x19mm_B_DM51_mp5a3_blk       {quality = 1; price = 150;};
	class gm_30Rnd_9x19mm_BSD_DM81_mp5_blk       {quality = 1; price = 150;};
	class gm_30Rnd_9x19mm_BSD_DM81_mp5a3_blk       {quality = 1; price = 150;};
	class gm_32Rnd_9x19mm_AP_DM91_mp2_blk       {quality = 1; price = 150;};
	class gm_32Rnd_9x19mm_B_DM11_mp2_blk       {quality = 1; price = 150;};
	class gm_32Rnd_9x19mm_B_DM51_mp2_blk       {quality = 1; price = 150;};
	class gm_40Rnd_556x45mm_B_DM11_hk33_blk       {quality = 1; price = 150;};
	class gm_40Rnd_556x45mm_B_T_DM21_hk33_blk       {quality = 1; price = 150;};
	class gm_40Rnd_762x51mm_AP_DM151_g3_blk       {quality = 1; price = 150;};
	class gm_40Rnd_762x51mm_B_DM111_g3_blk       {quality = 1; price = 150;};
	class gm_40Rnd_762x51mm_B_DM41_g3_blk       {quality = 1; price = 150;};
	class gm_40Rnd_762x51mm_B_T_DM21_g3_blk       {quality = 1; price = 150;};
	class gm_40Rnd_762x51mm_B_T_DM21A1_g3_blk       {quality = 1; price = 150;};
	class gm_40Rnd_762x51mm_B_T_DM21A2_g3_blk       {quality = 1; price = 150;};
	class gm_45Rnd_545x39mm_B_7N6_ak74_blk       {quality = 1; price = 150;};
	class gm_45Rnd_545x39mm_B_7N6_ak74_org       {quality = 1; price = 150;};	
	class gm_45Rnd_545x39mm_B_7N6_ak74_prp       {quality = 1; price = 150;};	
	class gm_45Rnd_545x39mm_B_T_7T3_ak74_blk       {quality = 1; price = 150;};
	class gm_45Rnd_545x39mm_B_T_7T3_ak74_org       {quality = 1; price = 150;};
	class gm_45Rnd_545x39mm_B_T_7T3_ak74_prp       {quality = 1; price = 150;};
	class gm_50Rnd_473x33mm_B_DM11_g11_blk       {quality = 1; price = 150;};
	class gm_50Rnd_473x33mm_B_T_DM21_g11_blk       {quality = 1; price = 150;};
	class gm_5Rnd_762x51mm_AP_DM151_g3_blk       {quality = 1; price = 150;};
	class gm_5Rnd_762x51mm_B_DM111_g3_blk       {quality = 1; price = 150;};
	class gm_5Rnd_762x51mm_B_DM41_g3_blk       {quality = 1; price = 150;};
	class gm_5Rnd_762x51mm_B_T_DM21_g3_blk       {quality = 1; price = 150;};
	class gm_5Rnd_762x51mm_B_T_DM21A1_g3_blk       {quality = 1; price = 150;};
	class gm_5Rnd_762x51mm_B_T_DM21A2_g3_blk       {quality = 1; price = 150;};
	class gm_60Rnd_556x45mm_B_DM11_hk33_blk       {quality = 1; price = 150;};
	class gm_60Rnd_556x45mm_B_T_DM21_hk33_blk       {quality = 1; price = 150;};
	class gm_60Rnd_9x19mm_AP_DM91_mp5a3_blk       {quality = 1; price = 150;};
	class gm_60Rnd_9x19mm_B_DM11_mp5a3_blk       {quality = 1; price = 150;};
	class gm_60Rnd_9x19mm_B_DM51_mp5a3_blk       {quality = 1; price = 150;};
	class gm_60Rnd_9x19mm_BSD_DM81_mp5a3_blk       {quality = 1; price = 150;};
	class gm_75Rnd_762x39mm_AP_7N23_ak47_blk       {quality = 1; price = 150;};
	class gm_75Rnd_762x39mm_AP_7N23_mpikm_blk       {quality = 1; price = 150;};
	class gm_75Rnd_762x39mm_B_57N231_ak47_blk       {quality = 1; price = 150;};
	class gm_75Rnd_762x39mm_B_57N231_mpikm_blk       {quality = 1; price = 150;};
	class gm_75Rnd_762x39mm_B_M43_ak47_blk       {quality = 1; price = 150;};
	class gm_75Rnd_762x39mm_B_T_57N231P_ak47_blk       {quality = 1; price = 150;};
	class gm_75Rnd_762x39mm_B_T_57N231P_mpikm_blk       {quality = 1; price = 150;};
	class gm_75Rnd_762x39mm_B_T_M43_ak47_blk       {quality = 1; price = 150;};
	class gm_75Rnd_762x39mm_BSD_57N231U_ak47_blk       {quality = 1; price = 150;};
	class gm_75Rnd_762x39mm_BSD_57N231U_mpikm_blk       {quality = 1; price = 150;};
	class gm_7rnd_12ga_hk512_pellet       {quality = 1; price = 150;};
	class gm_7rnd_12ga_hk512_slug       {quality = 1; price = 150;};
	//Pistol Magazines
	class gm_15Rnd_9x18mm_B_pst_pm63_blk       {quality = 1; price = 150;};
	class gm_1Rnd_265mm_flare_multi_grn_DM21       {quality = 1; price = 150;};
	class gm_1Rnd_265mm_flare_multi_nbc_DM47       {quality = 1; price = 150;};
	class gm_1Rnd_265mm_flare_multi_red_DM23       {quality = 1; price = 150;};
	class gm_1Rnd_265mm_flare_multi_red_gc       {quality = 1; price = 150;};
	class gm_1Rnd_265mm_flare_multi_wht_DM25       {quality = 1; price = 150;};
	class gm_1Rnd_265mm_flare_multi_yel_DM20       {quality = 1; price = 150;};
	class gm_1Rnd_265mm_flare_para_yel_DM16       {quality = 1; price = 150;};
	class gm_1Rnd_265mm_flare_single_grn_DM11       {quality = 1; price = 150;};
	class gm_1Rnd_265mm_flare_single_grn_gc       {quality = 1; price = 150;};
	class gm_1Rnd_265mm_flare_single_red_DM13       {quality = 1; price = 150;};
	class gm_1Rnd_265mm_flare_single_red_gc       {quality = 1; price = 150;};
	class gm_1Rnd_265mm_flare_single_wht_DM15       {quality = 1; price = 150;};
	class gm_1Rnd_265mm_flare_single_wht_gc       {quality = 1; price = 150;};
	class gm_1Rnd_265mm_flare_single_yel_DM10       {quality = 1; price = 150;};
	class gm_1Rnd_265mm_smoke_single_blk_gc       {quality = 1; price = 150;};
	class gm_1Rnd_265mm_smoke_single_blu_gc       {quality = 1; price = 150;};
	class gm_1Rnd_265mm_smoke_single_org_DM22       {quality = 1; price = 150;};
	class gm_1Rnd_265mm_smoke_single_vlt_DM24       {quality = 1; price = 150;};
	class gm_1Rnd_265mm_smoke_single_yel_DM19       {quality = 1; price = 150;};
	class gm_1Rnd_265mm_smoke_single_yel_gc       {quality = 1; price = 150;};
	class gm_25Rnd_9x18mm_B_pst_pm63_blk       {quality = 1; price = 150;};
	class gm_8Rnd_9x18mm_B_pst_pm_blk       {quality = 1; price = 150;};	
	class gm_8Rnd_9x19mm_B_DM11_p1_blk       {quality = 1; price = 150;};	
	class gm_8Rnd_9x19mm_B_DM11_p210_blk       {quality = 1; price = 150;};	
	class gm_8Rnd_9x19mm_B_DM51_p1_blk       {quality = 1; price = 150;};	
	class gm_8Rnd_9x19mm_B_DM51_p210_blk       {quality = 1; price = 150;};	
	class gm_8Rnd_9x19mm_BSD_DM81_p1_blk       {quality = 1; price = 150;};
	//launcherMags
	class gm_1Rnd_2650mm_potato_dm11       {quality = 1; price = 500;};
	class gm_1Rnd_40mm_heat_pg7v_rpg7       {quality = 1; price = 500;};
	class gm_1Rnd_40mm_heat_pg7vl_rpg7       {quality = 1; price = 500;};
	class gm_1Rnd_44x537mm_heat_dm32_pzf44_2       {quality = 1; price = 500;};
	class gm_1Rnd_60mm_heat_dm12_pzf3       {quality = 1; price = 500;};
	class gm_1Rnd_60mm_heat_dm22_pzf3       {quality = 1; price = 500;};
	class gm_1Rnd_60mm_heat_dm32_pzf3       {quality = 1; price = 500;};
	class gm_1Rnd_64mm_heat_pg18       {quality = 1; price = 500;};
	class gm_1Rnd_66mm_heat_m72a3       {quality = 1; price = 500;};
	class gm_1Rnd_70mm_he_m585_fim43       {quality = 1; price = 500;};
	class gm_1Rnd_72mm_he_9m32m       {quality = 1; price = 500;};
	class gm_1Rnd_84x245mm_heat_t_DM12_carlgustaf       {quality = 1; price = 500;};
	class gm_1Rnd_84x245mm_heat_t_DM12a1_carlgustaf       {quality = 1; price = 500;};
	class gm_1Rnd_84x245mm_heat_t_DM22_carlgustaf       {quality = 1; price = 500;};
	class gm_1Rnd_84x245mm_heat_t_DM32_carlgustaf       {quality = 1; price = 500;};
	class gm_1Rnd_84x245mm_ILLUM_DM16_carlgustaf       {quality = 1; price = 500;};
	//put magazine
	class gm_mine_at_dm21       {quality = 1; price = 1500;};
	class gm_mine_at_tm46       {quality = 1; price = 1500;};
	class gm_mine_ap_dm31       {quality = 1; price = 1500;};
	class gm_explosive_petn_charge       {quality = 1; price = 1500;};
	class gm_explosive_plnp_charge       {quality = 1; price = 1500;};
	class gm_mine_at_mn111       {quality = 1; price = 1500;};
	//pistols
	class gm_pm63_handgun_blk                                                {quality = 1; price = 927;};
	class gm_lp1_blk                                                         {quality = 1; price = 491;};
	class gm_p1_blk                                                          {quality = 1; price = 851;};
	class gm_p1sd_blk                                                        {quality = 1; price = 851;};
	class gm_p210_blk                                                        {quality = 1; price = 851;};
	class gm_m49_blk                                                         {quality = 1; price = 851;};
	class gm_p2a1_blk                                                        {quality = 1; price = 491;};
	class gm_wz78_blk                                                        {quality = 1; price = 491;};
	class gm_pm_blk                                                          {quality = 1; price = 851;};
	class gm_pim_blk                                                         {quality = 1; price = 851;};
	class gm_pimb_blk                                                        {quality = 1; price = 851;};
	//smgs
	class gm_mp5a2_blk                                                       {quality = 1; price = 1801;};
	class gm_mp5a3_blk                                                       {quality = 1; price = 1801;};
	class gm_mp5a4_blk                                                       {quality = 1; price = 1801;};
	class gm_mp5a5_blk                                                       {quality = 1; price = 1801;};
	class gm_mp5n_blk                                                        {quality = 1; price = 1801;};
	class gm_mp5sd2_blk                                                      {quality = 1; price = 1801;};
	class gm_mp5sd3_blk                                                      {quality = 1; price = 1801;};
	class gm_mp5sd5_blk                                                      {quality = 1; price = 1801;};
	class gm_mp5sd6_blk                                                      {quality = 1; price = 1801;};
	class gm_mp5nsd1_blk                                                     {quality = 1; price = 1801;};
	class gm_mp5nsd2_blk                                                     {quality = 1; price = 1801;};
	class gm_pm63_blk                                                        {quality = 1; price = 1427;};
	//assault rifles
	class gm_mp2a1_blk                                                       {quality = 1; price = 1901;};
	class gm_akm_wud                                                         {quality = 1; price = 2051;};
	class gm_akml_wud                                                        {quality = 1; price = 2051;};
	class gm_akmn_wud                                                        {quality = 1; price = 2051;};
	class gm_akms_wud                                                        {quality = 1; price = 2051;};
	class gm_akmsl_wud                                                       {quality = 1; price = 2051;};
	class gm_akmsn_wud                                                       {quality = 1; price = 2051;};
	class gm_mpikm_brn                                                       {quality = 1; price = 2051;};
	class gm_mpikm72_brn                                                     {quality = 1; price = 2051;};
	class gm_mpikms72_brn                                                    {quality = 1; price = 2051;};
	class gm_mpikms72k_brn                                                   {quality = 1; price = 2051;};
	class gm_mpikms72ksd_brn                                                 {quality = 1; price = 2201;};
	class gm_lmgk500_brn                                                     {quality = 1; price = 2051;};
	class gm_lmgk500s_brn                                                    {quality = 1; price = 2051;};
	class gm_mpikm72_blk                                                     {quality = 1; price = 2051;};
	class gm_mpikms72_blk                                                    {quality = 1; price = 2051;};
	class gm_mpikms72k_blk                                                   {quality = 1; price = 2051;};
	class gm_mpikms72ksd_blk                                                 {quality = 1; price = 2201;};
	class gm_lmgk500_blk                                                     {quality = 1; price = 2051;};
	class gm_lmgk500s_blk                                                    {quality = 1; price = 2051;};
	class gm_mpikm72_prp                                                     {quality = 1; price = 2051;};
	class gm_mpikms72_prp                                                    {quality = 1; price = 2051;};
	class gm_mpikms72k_prp                                                   {quality = 1; price = 2051;};
	class gm_mpikms72ksd_prp                                                 {quality = 1; price = 2201;};
	class gm_lmgk500_prp                                                     {quality = 1; price = 2051;};
	class gm_lmgk500s_prp                                                    {quality = 1; price = 2051;};
	class gm_akm_pallad_wud                                                  {quality = 1; price = 2051;};
	class gm_rpk_wud                                                         {quality = 1; price = 2401;};
	class gm_rpkn_wud                                                        {quality = 1; price = 2401;};
	class gm_lmgrpk_brn                                                      {quality = 1; price = 2401;};
	class gm_lmgrpk_prp                                                      {quality = 1; price = 2401;};
	class gm_lmgrpk_blk                                                      {quality = 1; price = 2401;};
	class gm_ak74n_wud                                                       {quality = 1; price = 2154;};
	class gm_rpk74n_wud                                                      {quality = 1; price = 2454;};
	class gm_mpiak74n_brn                                                    {quality = 1; price = 2154;};
	class gm_mpiaks74n_brn                                                   {quality = 1; price = 2154;};
	class gm_mpiaks74nk_brn                                                  {quality = 1; price = 2154;};
	class gm_lmgrpk74n_brn                                                   {quality = 1; price = 2454;};
	class gm_mpiak74n_blk                                                    {quality = 1; price = 2154;};
	class gm_mpiaks74n_blk                                                   {quality = 1; price = 2154;};
	class gm_mpiaks74nk_blk                                                  {quality = 1; price = 2154;};
	class gm_lmgrpk74n_blk                                                   {quality = 1; price = 2454;};
	class gm_mpiak74n_prp                                                    {quality = 1; price = 2154;};
	class gm_mpiaks74n_prp                                                   {quality = 1; price = 2154;};
	class gm_mpiaks74nk_prp                                                  {quality = 1; price = 2154;};
	class gm_lmgrpk74n_prp                                                   {quality = 1; price = 2454;};
	class gm_g11k2_ris_blk                                                   {quality = 1; price = 3601;};
	class gm_g36a1_blk                                                       {quality = 1; price = 2301;};
	class gm_g36a1_des                                                       {quality = 1; price = 2301;};
	class gm_g36e_blk                                                        {quality = 1; price = 2301;};
	class gm_g3a3_oli                                                        {quality = 1; price = 2252;};
	class gm_g3a3_blk                                                        {quality = 1; price = 2252;};
	class gm_g3a3_grn                                                        {quality = 1; price = 2252;};
	class gm_gvm75_oli                                                       {quality = 1; price = 2252;};
	class gm_gvm75_blk                                                       {quality = 1; price = 2252;};
	class gm_gvm75_grn                                                       {quality = 1; price = 2252;};
	class gm_g3a3_des                                                        {quality = 1; price = 2252;};
	class gm_g3a3a0_oli                                                      {quality = 1; price = 2252;};
	class gm_g3a3a0_blk                                                      {quality = 1; price = 2252;};
	class gm_g3a3a0_grn                                                      {quality = 1; price = 2252;};
	class gm_g3a3a0_gold                                                     {quality = 1; price = 2252;};
	class gm_g3a3a1_oli                                                      {quality = 1; price = 2252;};
	class gm_g3a3a1_blk                                                      {quality = 1; price = 2252;};
	class gm_g3a3a1_grn                                                      {quality = 1; price = 2252;};
	class gm_g3a3a1_ris_oli                                                  {quality = 1; price = 2252;};
	class gm_g3a3a1_ris_blk                                                  {quality = 1; price = 2252;};
	class gm_g3a3a1_ris_grn                                                  {quality = 1; price = 2252;};
	class gm_g3a3_dmr_oli                                                    {quality = 1; price = 2252;};
	class gm_g3a3_dmr_blk                                                    {quality = 1; price = 2252;};
	class gm_g3a3_dmr_grn                                                    {quality = 1; price = 2252;};
	class gm_g3a3_dmr_des                                                    {quality = 1; price = 2252;};
	class gm_g3a4_oli                                                        {quality = 1; price = 2252;};
	class gm_g3a4_blk                                                        {quality = 1; price = 2252;};
	class gm_g3a4_grn                                                        {quality = 1; price = 2252;};
	class gm_gvm75carb_oli                                                   {quality = 1; price = 2252;};
	class gm_gvm75carb_blk                                                   {quality = 1; price = 2252;};
	class gm_gvm75carb_grn                                                   {quality = 1; price = 2252;};
	class gm_g3a4_des                                                        {quality = 1; price = 2252;};
	class gm_g3a4a0_oli                                                      {quality = 1; price = 2252;};
	class gm_g3a4a0_blk                                                      {quality = 1; price = 2252;};
	class gm_g3a4a0_grn                                                      {quality = 1; price = 2252;};
	class gm_g3a4a1_oli                                                      {quality = 1; price = 2252;};
	class gm_g3a4a1_blk                                                      {quality = 1; price = 2252;};
	class gm_g3a4a1_grn                                                      {quality = 1; price = 2252;};
	class gm_g3a4a1_ris_oli                                                  {quality = 1; price = 2252;};
	class gm_g3a4a1_ris_blk                                                  {quality = 1; price = 2252;};
	class gm_g3a4a1_ris_grn                                                  {quality = 1; price = 2252;};
	class gm_g3a4_ebr_oli                                                    {quality = 1; price = 2252;};
	class gm_g3a4_ebr_blk                                                    {quality = 1; price = 2252;};
	class gm_g3a4_ebr_grn                                                    {quality = 1; price = 2252;};
	class gm_g3a4_ebr_des                                                    {quality = 1; price = 2252;};
	class gm_g3ka4_oli                                                       {quality = 1; price = 2252;};
	class gm_g3ka4_blk                                                       {quality = 1; price = 2252;};
	class gm_g3ka4_grn                                                       {quality = 1; price = 2252;};
	class gm_g3ka4a1_oli                                                     {quality = 1; price = 2252;};
	class gm_g3ka4a1_blk                                                     {quality = 1; price = 2252;};
	class gm_g3ka4a1_grn                                                     {quality = 1; price = 2252;};
	class gm_g3ka4a1_ris_blk                                                 {quality = 1; price = 2252;};
	class gm_hk33a2_blk                                                      {quality = 1; price = 2451;};
	class gm_hk33a2a1_blk                                                    {quality = 1; price = 2451;};
	class gm_hk33a3_blk                                                      {quality = 1; price = 2451;};
	class gm_hk33a3a1_blk                                                    {quality = 1; price = 2451;};
	class gm_hk33ka2_blk                                                     {quality = 1; price = 2451;};
	class gm_hk33ka2a1_blk                                                   {quality = 1; price = 2451;};
	class gm_hk33ka3_blk                                                     {quality = 1; price = 2451;};
	class gm_hk33ka3a1_blk                                                   {quality = 1; price = 2451;};
	class gm_hk512_wud                                                       {quality = 1; price = 2401;};
	class gm_hk512_ris_wud                                                   {quality = 1; price = 2401;};
	class gm_m16a1_blk                                                       {quality = 1; price = 2301;};
	class gm_m16a2_blk                                                       {quality = 1; price = 2301;};
	class gm_c7a1_blk                                                        {quality = 1; price = 2301;};
	class gm_c7a1_oli                                                        {quality = 1; price = 2301;};
	class gm_gvm95_blk                                                       {quality = 1; price = 2301;};
	class gm_sg550_oli                                                       {quality = 1; price = 2251;};
	class gm_sg550_blk                                                       {quality = 1; price = 2251;};
	class gm_sg550_grn                                                       {quality = 1; price = 2251;};
	class gm_sg550_pnk                                                       {quality = 1; price = 2251;};
	class gm_sg550_ris_oli                                                   {quality = 1; price = 2251;};
	class gm_sg550_ris_blk                                                   {quality = 1; price = 2251;};
	class gm_sg550_ris_grn                                                   {quality = 1; price = 2251;};
	class gm_sg550_ris_pnk                                                   {quality = 1; price = 2251;};
	class gm_sg551_oli                                                       {quality = 1; price = 2251;};
	class gm_sg551_blk                                                       {quality = 1; price = 2251;};
	class gm_sg551_grn                                                       {quality = 1; price = 2251;};
	class gm_sg551_pnk                                                       {quality = 1; price = 2251;};
	class gm_sg551_ris_oli                                                   {quality = 1; price = 2251;};
	class gm_sg551_ris_blk                                                   {quality = 1; price = 2251;};
	class gm_sg551_ris_grn                                                   {quality = 1; price = 2251;};
	class gm_sg551_ris_pnk                                                   {quality = 1; price = 2251;};
	class gm_sg551_swat_blk                                                  {quality = 1; price = 2251;};
	class gm_sg542_oli                                                       {quality = 1; price = 2301;};
	class gm_sg542_blk                                                       {quality = 1; price = 2301;};
	class gm_sg542_ris_oli                                                   {quality = 1; price = 2301;};
	class gm_sg542_ris_blk                                                   {quality = 1; price = 2301;};
	class gm_hk53a2_blk                                                      {quality = 1; price = 2451;};
	class gm_hk53a3_blk                                                      {quality = 1; price = 2451;};

	//sniper rifles
	class gm_msg90_blk       {quality = 1; price = 500;};
	class gm_msg90a1_blk       {quality = 1; price = 500;};
	class gm_psg1_blk       {quality = 1; price = 500;};
	class gm_svd_wud       {quality = 1; price = 500;};

	//launchers
	class gm_9k32m_oli                                                      {quality = 1; price = 2451;}; 
	class gm_fim43_oli                                                      {quality = 1; price = 2451;}; 
	class gm_m72a3_oli                                                      {quality = 1; price = 2451;}; 
	class gm_p2a1_launcher_blk                                                      {quality = 1; price = 2451;}; 
	class gm_pzf3_blk                                                      {quality = 1; price = 2451;}; 
	class gm_pzf44_2_oli                                                      {quality = 1; price = 2451;}; 
	class gm_pzf84_oli                                                      {quality = 1; price = 2451;}; 
	class gm_rpg18_oli                                                      {quality = 1; price = 2451;}; 
	class gm_rpg7_prp                                                      {quality = 1; price = 2451;}; 
	class gm_rpg7_wud                                                      {quality = 1; price = 2451;}; 

	//binos
	class gm_df7x40_blk                                                      {quality = 1; price = 2451;};
	class gm_fero51_oli                                                      {quality = 1; price = 2451;};
	class gm_ferod16_des                                                      {quality = 1; price = 2451;};
	class gm_ferod16_oli                                                      {quality = 1; price = 2451;};
	class gm_ferod16_win                                                      {quality = 1; price = 2451;};
	class gm_lp7_oli                                                      {quality = 1; price = 2451;};
	class gm_lpr1_oli                                                      {quality = 1; price = 2451;};
	//NVGS
	class gm_ferod51_oli       {quality = 1; price = 500;};
	class gm_nsg66_oli       {quality = 1; price = 500;};
	//tools
	class gm_bayonet_6x3_blk       {quality = 1; price = 500;};
	class gm_bayonet_6x3_wud       {quality = 1; price = 500;};
	class gm_bayonet_g11_blk       {quality = 1; price = 500;};
	class gm_bayonet_g11_oli       {quality = 1; price = 500;};
	class gm_bayonet_g3_blk       {quality = 1; price = 500;};
	class gm_bayonet_g3_oli       {quality = 1; price = 500;};
	class gm_boltcutter       {quality = 1; price = 500;};
	class gm_gc_army_gauzeBandage       {quality = 1; price = 500;};
	class gm_gc_army_medbox       {quality = 1; price = 500;};
	class gm_gc_army_medkit       {quality = 1; price = 500;};
	class gm_gc_compass_f73       {quality = 1; price = 500;};
	class gm_gc_firstaidkit_vehicle       {quality = 1; price = 500;};
	class gm_ge_army_burnBandage       {quality = 1; price = 500;};
	class gm_ge_army_conat2       {quality = 1; price = 500;};
	class gm_ge_army_firstaidkit_vehicle       {quality = 1; price = 500;};
	class gm_ge_army_gauzeBandage       {quality = 1; price = 500;};
	class gm_ge_army_gauzeCompress       {quality = 1; price = 500;};
	class gm_ge_army_medkit_80       {quality = 1; price = 500;};
	class gm_ge_firstaidkit_vehicle       {quality = 1; price = 500;};
	class gm_repairkit_01       {quality = 1; price = 500;};
	class gm_watch_kosei_80       {quality = 1; price = 500;};
	//top attachments
	class gm_blits_ris_blk                                                      {quality = 1; price = 2451;}; 
	class gm_blits_stanagClaw_blk                                                      {quality = 1; price = 2451;}; 
	class gm_blits_stanagClaw_oli                                                      {quality = 1; price = 2451;}; 
	class gm_blits_stanagHK_blk                                                      {quality = 1; price = 2451;}; 
	class gm_blits_stanagSig_blk                                                      {quality = 1; price = 2451;}; 
	class gm_c79a1_blk                                                      {quality = 1; price = 2451;}; 
	class gm_c79a1_oli                                                      {quality = 1; price = 2451;}; 
	class gm_colt4x20_ar15_blk                                                      {quality = 1; price = 2451;}; 
	class gm_colt4x20_stanagClaw_blk                                                      {quality = 1; price = 2451;}; 
	class gm_diavari_da_stanagClaw_blk                                                      {quality = 1; price = 2451;}; 
	class gm_diavari_da_stanagClaw_oli                                                      {quality = 1; price = 2451;}; 
	class gm_feroz24_ris_blk                                                      {quality = 1; price = 2451;}; 
	class gm_feroz24_stanagClaw_blk                                                      {quality = 1; price = 2451;}; 
	class gm_feroz24_stanagClaw_oli                                                      {quality = 1; price = 2451;}; 
	class gm_feroz24_stanagHK_blk                                                      {quality = 1; price = 2451;}; 
	class gm_feroz24_stanagSig_blk                                                      {quality = 1; price = 2451;}; 
	class gm_feroz2x17_pzf44_2_blk                                                      {quality = 1; price = 2451;}; 
	class gm_feroz2x17_pzf84_blk                                                      {quality = 1; price = 2451;}; 
	class gm_feroz51_pzf44_2_oli                                                      {quality = 1; price = 2451;}; 
	class gm_feroz51_pzf84_oli                                                      {quality = 1; price = 2451;}; 
	class gm_feroz51_ris_oli                                                      {quality = 1; price = 2451;}; 
	class gm_feroz51_stanagClaw_oli                                                      {quality = 1; price = 2451;}; 
	class gm_feroz51_stanagHK_oli                                                      {quality = 1; price = 2451;}; 
	class gm_feroz51_stanagSig_oli                                                      {quality = 1; price = 2451;}; 
	class gm_g11_lps_prism11mm_blk                                                      {quality = 1; price = 2451;}; 
	class gm_g11_mps_prism11mm_blk                                                      {quality = 1; price = 2451;}; 
	class gm_ls1500_ir_ris_blk                                                      {quality = 1; price = 2451;}; 
	class gm_ls1500_ir_stanagClaw_blk                                                      {quality = 1; price = 2451;}; 
	class gm_ls1500_ir_stanaghk_blk                                                      {quality = 1; price = 2451;}; 
	class gm_ls1500_ir_stanagSig_blk                                                      {quality = 1; price = 2451;}; 
	class gm_ls1500_red_ris_blk                                                      {quality = 1; price = 2451;}; 
	class gm_ls1500_red_stanagClaw_blk                                                      {quality = 1; price = 2451;}; 
	class gm_ls1500_red_stanaghk_blk                                                      {quality = 1; price = 2451;}; 
	class gm_ls1500_red_stanagSig_blk                                                      {quality = 1; price = 2451;}; 
	class gm_ls45_ir_ris_blk                                                      {quality = 1; price = 2451;}; 
	class gm_ls45_ir_stanagClaw_blk                                                      {quality = 1; price = 2451;}; 
	class gm_ls45_ir_stanaghk_blk                                                      {quality = 1; price = 2451;}; 
	class gm_ls45_ir_stanagSig_blk                                                      {quality = 1; price = 2451;}; 
	class gm_ls45_ir_uziclaw_blk                                                      {quality = 1; price = 2451;}; 
	class gm_ls45_red_ris_blk                                                      {quality = 1; price = 2451;}; 
	class gm_ls45_red_stanagClaw_blk                                                      {quality = 1; price = 2451;}; 
	class gm_ls45_red_stanaghk_blk                                                      {quality = 1; price = 2451;}; 
	class gm_ls45_red_stanagSig_blk                                                      {quality = 1; price = 2451;}; 
	class gm_ls45_red_uziclaw_blk                                                      {quality = 1; price = 2451;}; 
	class gm_lsminiv_ir_ris_blk                                                      {quality = 1; price = 2451;}; 
	class gm_lsminiv_ir_stanagClaw_blk                                                      {quality = 1; price = 2451;}; 
	class gm_lsminiv_ir_stanaghk_blk                                                      {quality = 1; price = 2451;}; 
	class gm_lsminiv_ir_stanagSig_blk                                                      {quality = 1; price = 2451;}; 
	class gm_lsminiv_red_ris_blk                                                      {quality = 1; price = 2451;}; 
	class gm_lsminiv_red_stanagClaw_blk                                                      {quality = 1; price = 2451;}; 
	class gm_lsminiv_red_stanaghk_blk                                                      {quality = 1; price = 2451;}; 
	class gm_lsminiv_red_stanagSig_blk                                                      {quality = 1; price = 2451;}; 
	class gm_maglite_3d_ris_blk                                                      {quality = 1; price = 2451;}; 
	class gm_maglite_3d_stanagClaw_blk                                                      {quality = 1; price = 2451;}; 
	class gm_maglite_3d_stanaghk_blk                                                      {quality = 1; price = 2451;}; 
	class gm_maglite_3d_stanagSig_blk                                                      {quality = 1; price = 2451;}; 
	class gm_nspu_dovetail_blk                                                      {quality = 1; price = 2451;}; 
	class gm_nspu_dovetail_gry                                                      {quality = 1; price = 2451;}; 
	class gm_pgo7v_blk                                                      {quality = 1; price = 2451;}; 
	class gm_pka_dovetail_blk                                                      {quality = 1; price = 2451;}; 
	class gm_pka_dovetail_gry                                                      {quality = 1; price = 2451;}; 
	class gm_pso1_dovetail_blk                                                      {quality = 1; price = 2451;}; 
	class gm_pso1_dovetail_gry                                                      {quality = 1; price = 2451;}; 
	class gm_pso6x36_1_dovetail_blk                                                      {quality = 1; price = 2451;}; 
	class gm_pso6x36_1_dovetail_gry                                                      {quality = 1; price = 2451;}; 
	class gm_rv_ris_blk                                                      {quality = 1; price = 2451;}; 
	class gm_rv_stanagClaw_blk                                                      {quality = 1; price = 2451;}; 
	class gm_rv_stanagClaw_oli                                                      {quality = 1; price = 2451;}; 
	class gm_rv_stanagHK_blk                                                      {quality = 1; price = 2451;}; 
	class gm_rv_stanagSig_blk                                                      {quality = 1; price = 2451;}; 
	class gm_streamlight_sl20_ris_blk                                                      {quality = 1; price = 2451;}; 
	class gm_streamlight_sl20_ris_brn                                                      {quality = 1; price = 2451;}; 
	class gm_streamlight_sl20_stanagClaw_blk                                                      {quality = 1; price = 2451;}; 
	class gm_streamlight_sl20_stanagClaw_brn                                                      {quality = 1; price = 2451;}; 
	class gm_streamlight_sl20_stanaghk_blk                                                      {quality = 1; price = 2451;}; 
	class gm_streamlight_sl20_stanaghk_brn                                                      {quality = 1; price = 2451;}; 
	class gm_streamlight_sl20_stanagSig_blk                                                      {quality = 1; price = 2451;}; 
	class gm_streamlight_sl20_stanagSig_brn                                                      {quality = 1; price = 2451;}; 
	class gm_zf10x42_ris_blk                                                      {quality = 1; price = 2451;}; 
	class gm_zf10x42_ris_oli                                                      {quality = 1; price = 2451;}; 
	class gm_zf10x42_stanagClaw_blk                                                      {quality = 1; price = 2451;}; 
	class gm_zf10x42_stanagClaw_oli                                                      {quality = 1; price = 2451;}; 
	class gm_zf10x42_stanaghk_blk                                                      {quality = 1; price = 2451;}; 
	class gm_zf10x42_stanaghk_oli                                                      {quality = 1; price = 2451;}; 
	class gm_zf10x42_stanagsig_blk                                                      {quality = 1; price = 2451;}; 
	class gm_zf10x42_stanagsig_oli                                                      {quality = 1; price = 2451;}; 
	class gm_zf6x42_psg1_stanag_blk                                                      {quality = 1; price = 2451;}; 
	class gm_zfk4x25_blk                                                      {quality = 1; price = 2451;}; 
	class gm_zln1k_grn_dovetail_blk                                                      {quality = 1; price = 2451;}; 
	class gm_zln1k_grn_dovetail_gry                                                      {quality = 1; price = 2451;}; 
	class gm_zln1k_ir_dovetail_blk                                                      {quality = 1; price = 2451;}; 
	class gm_zpp_stanagClaw_blk                                                      {quality = 1; price = 2451;}; 
	class gm_zvn64_ak                                                      {quality = 1; price = 2451;}; 
	class gm_zvn64_lmgk500                                                      {quality = 1; price = 2451;}; 	
	class gm_zvn64_rpk                                                      {quality = 1; price = 2451;}; 
	//side attachments
	class gm_flashlightp2_brk_ak74handguard_dino                                                      {quality = 1; price = 2451;};
	class gm_flashlightp2_brk_akhandguard_dino                                                      {quality = 1; price = 2451;};
	class gm_flashlightp2_brk_akkhandguard_dino                                                      {quality = 1; price = 2451;};
	class gm_flashlightp2_wht_ak74handguard_blu                                                     {quality = 1; price = 2451;};
	class gm_flashlightp2_wht_akhandguard_blu                                                      {quality = 1; price = 2451;};
	class gm_flashlightp2_wht_akkhandguard_blu                                                     {quality = 1; price = 2451;};
	class gm_maglite_2d_hkslim_blk                                                      {quality = 1; price = 2451;};
	class gm_surefire_l60_ir_bayonetg11_blk                                                      {quality = 1; price = 2451;};
	class gm_surefire_l60_ir_hoseclamp_blk                                                      {quality = 1; price = 2451;};
	class gm_surefire_l60_ir_surefire_blk                                                      {quality = 1; price = 2451;};
	class gm_surefire_l60_red_bayonetg11_blk                                                      {quality = 1; price = 2451;};
	class gm_surefire_l60_red_hoseclamp_blk                                                      {quality = 1; price = 2451;};
	class gm_surefire_l60_red_surefire_blk                                                      {quality = 1; price = 2451;};
	class gm_surefire_l60_wht_bayonetg11_blk                                                      {quality = 1; price = 2451;};
	class gm_surefire_l60_wht_hoseclamp_blk                                                      {quality = 1; price = 2451;};
	class gm_surefire_l60_wht_surefire_blk                                                      {quality = 1; price = 2451;};
	class gm_surefire_l72_grn_bayonetg11_blk                                                      {quality = 1; price = 2451;};
	class gm_surefire_l72_grn_hoseclamp_blk                                                      {quality = 1; price = 2451;};	
	class gm_surefire_l72_grn_surefire_blk                                                      {quality = 1; price = 2451;};
	class gm_surefire_l72_red_bayonetg11_blk                                                      {quality = 1; price = 2451;};
	class gm_surefire_l72_red_hoseclamp_blk                                                      {quality = 1; price = 2451;};	
	class gm_surefire_l72_red_surefire_blk                                                      {quality = 1; price = 2451;};	
	class gm_surefire_l75_ir_bayonetg11_blk                                                      {quality = 1; price = 2451;};	
	class gm_surefire_l75_ir_hoseclamp_blk                                                      {quality = 1; price = 2451;};	
	class gm_surefire_l75_ir_surefire_blk                                                      {quality = 1; price = 2451;};
	//suppressors
	class gm_suppressor_atec150_556mm_blk             {quality = 1; price = 2451;};	
	class gm_suppressor_atec150_556mm_long_blk             {quality = 1; price = 2451;};
	class gm_suppressor_atec150_762mm_blk             {quality = 1; price = 2451;};
	class gm_suppressor_atec150_762mm_long_blk             {quality = 1; price = 2451;};
	class gm_suppressor_hknavy_9mm_gry             {quality = 1; price = 2451;};
	class gm_suppressor_kacnavy_9mm_blk             {quality = 1; price = 2451;};
	class gm_suppressor_kacnavyk_9mm_blk             {quality = 1; price = 2451;};
	class gm_suppressor_kacnavysd_9mm_blk             {quality = 1; price = 2451;};
	class gm_suppressor_m10_9mm_blk             {quality = 1; price = 2451;};
	class gm_suppressor_pbs4_545mm_blk             {quality = 1; price = 2451;};
	class gm_suppressor_safloryt_blk             {quality = 1; price = 2451;};
	class gm_suppressor_tgpv_762mm_blk             {quality = 1; price = 2451;};
	//bipod
	class gm_g3_bipod_blk       {quality = 1; price = 500;};
	class gm_g8_bipod_blk       {quality = 1; price = 500;};
	class gm_msg90_bipod_blk       {quality = 1; price = 500;};
	//grenades
	class gm_handgrenade_frag_dm41       {quality = 1; price = 1500;};
	class gm_handgrenade_frag_dm41a1       {quality = 1; price = 1500;};
	class gm_handgrenade_frag_dm51       {quality = 1; price = 1500;};
	class gm_handgrenade_frag_dm51a1       {quality = 1; price = 1500;};
	class gm_handgrenade_pracfrag_dm58       {quality = 1; price = 1500;}; 
	class gm_handgrenade_conc_dm51       {quality = 1; price = 1500;};
	class gm_handgrenade_conc_dm51a1       {quality = 1; price = 1500;};
	class gm_handgrenade_pracconc_dm58       {quality = 1; price = 1500;};
	class gm_handgrenade_frag_m26       {quality = 1; price = 1500;};
	class gm_handgrenade_frag_m26a1       {quality = 1; price = 1500;};
	class gm_handgrenade_frag_rgd5       {quality = 1; price = 1500;};
	class gm_smokeshell_grn_dm21       {quality = 1; price = 1500;};
	class gm_smokeshell_red_dm23       {quality = 1; price = 1500;};
	class gm_smokeshell_yel_dm26       {quality = 1; price = 1500;};
	class gm_smokeshell_org_dm32       {quality = 1; price = 1500;};
	class gm_smokeshell_wht_dm25       {quality = 1; price = 1500;};
	class gm_smokeshell_grn_gc       {quality = 1; price = 1500;};
	class gm_smokeshell_blk_gc       {quality = 1; price = 1500;};
	class gm_smokeshell_red_gc       {quality = 1; price = 1500;};
	class gm_smokeshell_yel_gc       {quality = 1; price = 1500;};
	class gm_smokeshell_blu_gc       {quality = 1; price = 1500;};
	class gm_smokeshell_org_gc       {quality = 1; price = 1500;};
	class gm_smokeshell_wht_gc       {quality = 1; price = 1500;};

	//attachments
	

	///////////////////////////////////////////////////////////////////////////////
	// BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_OldBike 						{ quality = 1; price = 40; };
	class Exile_Bike_MountainBike 					{ quality = 1; price = 50; };

	///////////////////////////////////////////////////////////////////////////////
	// QUAD BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_QuadBike_Black					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Blue					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Red					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_White					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Nato					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Csat					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Fia					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Guerilla01			{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Guerilla02			{ quality = 1; price = 2500; };

	///////////////////////////////////////////////////////////////////////////////
	// KARTS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Kart_BluKing					{ quality = 1; price = 1100; };
	class Exile_Car_Kart_RedStone					{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Vrana						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Green						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Blue						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Orange						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_White						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Yellow						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Black						{ quality = 1; price = 1100; };

	///////////////////////////////////////////////////////////////////////////////
	// MOTOR BOATS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_MotorBoat_Police				{ quality = 1; price = 700; };
	class Exile_Boat_MotorBoat_Orange				{ quality = 1; price = 700; };
	class Exile_Boat_MotorBoat_White				{ quality = 1; price = 700; };

	///////////////////////////////////////////////////////////////////////////////
	// RUBBER DUCKS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_RubberDuck_CSAT				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Digital				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Orange				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Blue				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Black				{ quality = 1; price = 500; };

	///////////////////////////////////////////////////////////////////////////////
	// SDV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_SDV_CSAT						{ quality = 1; price = 11000; };
	class Exile_Boat_SDV_Digital					{ quality = 1; price = 11000; };
	class Exile_Boat_SDV_Grey						{ quality = 1; price = 11000; };

	///////////////////////////////////////////////////////////////////////////////
	// UH-1H Huey
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huey_Green 					{ quality = 1; price = 21000; };
	class Exile_Chopper_Huey_Desert					{ quality = 1; price = 21000; };
	class Exile_Chopper_Huey_Armed_Green			{ quality = 1; price = 25000; };
	class Exile_Chopper_Huey_Armed_Desert			{ quality = 1; price = 25000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hellcat
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hellcat_Green				{ quality = 1; price = 27500; };
	class Exile_Chopper_Hellcat_FIA					{ quality = 1; price = 27500; };

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Green			{ quality = 1; price = 23000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird (Civillian)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Civillian_Blue				{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Red				{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_ION				{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_BlueLine			{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Digital			{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Elliptical		{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Furious			{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_GrayWatcher		{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Jeans				{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Light				{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Shadow			{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Sheriff			{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Speedy			{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Sunset			{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Vrana				{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Wasp				{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Wave				{ quality = 1; price = 17000; };

	///////////////////////////////////////////////////////////////////////////////
	// Huron
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huron_Black								{ quality = 1; price = 50000; };
	class Exile_Chopper_Huron_Green								{ quality = 1; price = 50000; };

	///////////////////////////////////////////////////////////////////////////////
	// Mohawk
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Mohawk_FIA								{ quality = 1; price = 45000; };

	///////////////////////////////////////////////////////////////////////////////
	// Orca
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Orca_CSAT								{ quality = 1; price = 28000; };
	class Exile_Chopper_Orca_Black								{ quality = 1; price = 28000; };
	class Exile_Chopper_Orca_BlackCustom						{ quality = 1; price = 28000; };

	///////////////////////////////////////////////////////////////////////////////
	// Taru
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Transport_CSAT						{ quality = 1; price = 17000; };
	class Exile_Chopper_Taru_Transport_Black					{ quality = 1; price = 17000; };

	class Exile_Chopper_Taru_CSAT								{ quality = 1; price = 33000; };
	class Exile_Chopper_Taru_Black								{ quality = 1; price = 33000; };

	class Exile_Chopper_Taru_Covered_CSAT						{ quality = 1; price = 43000; };
	class Exile_Chopper_Taru_Covered_Black						{ quality = 1; price = 43000; };

	///////////////////////////////////////////////////////////////////////////////
	// Cessna
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_Cessna									{ quality = 1; price = 16500; };

	///////////////////////////////////////////////////////////////////////////////
	// An-2
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_AN2_Green									{ quality = 1; price = 17000; };
	class Exile_Plane_AN2_White									{ quality = 1; price = 17000; };
	class Exile_Plane_AN2_Stripe								{ quality = 1; price = 17000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Beige						{ quality = 1; price = 12000; };
	class Exile_Car_Hatchback_Green						{ quality = 1; price = 12000; };
	class Exile_Car_Hatchback_Blue						{ quality = 1; price = 12000; };
	class Exile_Car_Hatchback_BlueCustom				{ quality = 1; price = 12000; };
	class Exile_Car_Hatchback_BeigeCustom				{ quality = 1; price = 12000; };
	class Exile_Car_Hatchback_Yellow					{ quality = 1; price = 12000; };
	class Exile_Car_Hatchback_Grey						{ quality = 1; price = 12000; };
	class Exile_Car_Hatchback_Black						{ quality = 1; price = 12000; };
	class Exile_Car_Hatchback_Dark						{ quality = 1; price = 12000; };
	class Exile_Car_Hatchback_Rusty1					{ quality = 1; price = 12000; };
	class Exile_Car_Hatchback_Rusty2					{ quality = 1; price = 12000; };
	class Exile_Car_Hatchback_Rusty3					{ quality = 1; price = 12000; };

	///////////////////////////////////////////////////////////////////////////////
	// Golf
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Golf_Red							{ quality = 1; price = 8000; };
	class Exile_Car_Golf_Black							{ quality = 1; price = 8000; };

	///////////////////////////////////////////////////////////////////////////////
	// Ikarus
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ikarus_Blue 				{ quality = 1; price = 17000; };
	class Exile_Car_Ikarus_Red 					{ quality = 1; price = 17000; };
	class Exile_Car_Ikarus_Party 				{ quality = 1; price = 17000; };

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Open)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Open_Blue			{ quality = 1; price = 25000; };
	class Exile_Car_Ural_Open_Yellow		{ quality = 1; price = 25000; };
	class Exile_Car_Ural_Open_Worker		{ quality = 1; price = 25000; };
	class Exile_Car_Ural_Open_Military		{ quality = 1; price = 25000; };

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Covered_Blue			{ quality = 1; price = 28000; };
	class Exile_Car_Ural_Covered_Yellow			{ quality = 1; price = 28000; };
	class Exile_Car_Ural_Covered_Worker			{ quality = 1; price = 28000; };
	class Exile_Car_Ural_Covered_Military		{ quality = 1; price = 28000; };

	///////////////////////////////////////////////////////////////////////////////
	// V3S
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_V3S_Open			{ quality = 1; price = 28000; };
	class Exile_Car_V3S_Covered			{ quality = 1; price = 28000; };

	///////////////////////////////////////////////////////////////////////////////
	// SUVXL
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUVXL_Black 				{ quality = 1; price = 20000; };

	///////////////////////////////////////////////////////////////////////////////
	// Tractor
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Tractor_Red 				{ quality = 1; price = 2000; };

	///////////////////////////////////////////////////////////////////////////////
	// Tractor (Old)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_OldTractor_Red 				{ quality = 1; price = 1200; };

	///////////////////////////////////////////////////////////////////////////////
	// Tow Tractor
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_TowTractor_White			{ quality = 1; price = 1800; };

	///////////////////////////////////////////////////////////////////////////////
	// Octavius
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Octavius_White				{ quality = 1; price = 6000; };
	class Exile_Car_Octavius_Black				{ quality = 1; price = 6000; };

	///////////////////////////////////////////////////////////////////////////////
	// UAZ
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_UAZ_Green				{ quality = 1; price = 7000; };

	///////////////////////////////////////////////////////////////////////////////
	// UAZ (Open)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_UAZ_Open_Green			{ quality = 1; price = 8000; };

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Red 				{ quality = 1; price = 11000; };
	class Exile_Car_LandRover_Urban 			{ quality = 1; price = 11000; };
	class Exile_Car_LandRover_Green 			{ quality = 1; price = 11000; };
	class Exile_Car_LandRover_Sand 				{ quality = 1; price = 11000; };
	class Exile_Car_LandRover_Desert 			{ quality = 1; price = 11000; };

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover (Ambulance)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Ambulance_Green		{ quality = 1; price = 12000; };
	class Exile_Car_LandRover_Ambulance_Desert		{ quality = 1; price = 12000; };
	class Exile_Car_LandRover_Ambulance_Sand		{ quality = 1; price = 12000; };

	///////////////////////////////////////////////////////////////////////////////
	// Lada
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Lada_Green 				{ quality = 1; price = 6000; };
	class Exile_Car_Lada_Taxi 				{ quality = 1; price = 6000; };
	class Exile_Car_Lada_Red 				{ quality = 1; price = 6000; };
	class Exile_Car_Lada_White 				{ quality = 1; price = 6000; };
	class Exile_Car_Lada_Hipster 			{ quality = 1; price = 6000; };

	///////////////////////////////////////////////////////////////////////////////
	// Volha
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Volha_Blue				{ quality = 1; price = 6000; };
	class Exile_Car_Volha_White				{ quality = 1; price = 6000; };
	class Exile_Car_Volha_Black				{ quality = 1; price = 6000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback (Sport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Sport_Red					{ quality = 1; price = 14000; };
	class Exile_Car_Hatchback_Sport_Blue				{ quality = 1; price = 14000; };
	class Exile_Car_Hatchback_Sport_Orange				{ quality = 1; price = 14000; };
	class Exile_Car_Hatchback_Sport_White				{ quality = 1; price = 14000; };
	class Exile_Car_Hatchback_Sport_Beige				{ quality = 1; price = 14000; };
	class Exile_Car_Hatchback_Sport_Green				{ quality = 1; price = 14000; };

	///////////////////////////////////////////////////////////////////////////////
	// HEMMT
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_HEMMT 								{ quality = 1; price = 48000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hunter
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hunter 								{ quality = 1; price = 26500; };

	///////////////////////////////////////////////////////////////////////////////
	// Ifrit
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ifrit 								{ quality = 1; price = 23000; };

	///////////////////////////////////////////////////////////////////////////////
	// Offroad
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Red							{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Beige						{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_White						{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Blue						{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_DarkRed						{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_BlueCustom					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla01					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla02					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla03					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla04					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla05					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla06					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla07					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla08					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla09					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla10					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla11					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla12					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Rusty1						{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Rusty2						{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Rusty3						{ quality = 1; price = 16000; };

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Armed_Guerilla01 			{ quality = 1; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla02 			{ quality = 1; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla03 			{ quality = 1; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla04 			{ quality = 1; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla05 			{ quality = 1; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla06 			{ quality = 1; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla07 			{ quality = 1; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla08 			{ quality = 1; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla09 			{ quality = 1; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla10 			{ quality = 1; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla11 			{ quality = 1; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla12 			{ quality = 1; price = 25000; };

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Repair)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Repair_Civillian 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Red 					{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Beige 				{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_White 				{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Blue 				{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_DarkRed 				{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_BlueCustom 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla01 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla02 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla03 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla04 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla05 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla06 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla07 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla08 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla09 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla10 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla11 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla12 			{ quality = 1; price = 12500; };

	///////////////////////////////////////////////////////////////////////////////
	// Strider
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Strider 							{ quality = 1; price = 44000; };

	///////////////////////////////////////////////////////////////////////////////
	// SUV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Red 							{ quality = 1; price = 14000; };
	class Exile_Car_SUV_Black 							{ quality = 1; price = 14000; };
	class Exile_Car_SUV_Grey 							{ quality = 1; price = 14000; };
	class Exile_Car_SUV_Orange 							{ quality = 1; price = 14000; };

	///////////////////////////////////////////////////////////////////////////////
	// SUV (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Armed_Black 					{ quality = 1; price = 25000; };

	///////////////////////////////////////////////////////////////////////////////
	// BRDM2
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_BRDM2_HQ 							{ quality = 1; price = 25000; };

	///////////////////////////////////////////////////////////////////////////////
	// BTR40
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_BTR40_MG_Green 							{ quality = 1; price = 38000; };
	class Exile_Car_BTR40_MG_Camo 							{ quality = 1; price = 38000; };
	class Exile_Car_BTR40_Green 							{ quality = 1; price = 15000; };
	class Exile_Car_BTR40_Camo 								{ quality = 1; price = 15000; };

	///////////////////////////////////////////////////////////////////////////////
	// HMMWV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_HMMWV_M134_Green 							{ quality = 1; price = 33000; };
	class Exile_Car_HMMWV_M134_Desert 							{ quality = 1; price = 33000; };
	class Exile_Car_HMMWV_M2_Green 								{ quality = 1; price = 40000; };
	class Exile_Car_HMMWV_M2_Desert 							{ quality = 1; price = 40000; };
	class Exile_Car_HMMWV_MEV_Green 							{ quality = 1; price = 21000; };
	class Exile_Car_HMMWV_MEV_Desert 							{ quality = 1; price = 21000; };
	class Exile_Car_HMMWV_UNA_Green 							{ quality = 1; price = 21000; };
	class Exile_Car_HMMWV_UNA_Desert 							{ quality = 1; price = 21000; };

	///////////////////////////////////////////////////////////////////////////////
	// Tempest
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Tempest 							{ quality = 1; price = 48300; };

	///////////////////////////////////////////////////////////////////////////////
	// Van
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Black 							{ quality = 1; price = 12000; };
	class Exile_Car_Van_White 							{ quality = 1; price = 12000; };
	class Exile_Car_Van_Red 							{ quality = 1; price = 12000; };
	class Exile_Car_Van_Guerilla01 						{ quality = 1; price = 12000; };
	class Exile_Car_Van_Guerilla02 						{ quality = 1; price = 12000; };
	class Exile_Car_Van_Guerilla03 						{ quality = 1; price = 12000; };
	class Exile_Car_Van_Guerilla04 						{ quality = 1; price = 12000; };
	class Exile_Car_Van_Guerilla05 						{ quality = 1; price = 12000; };
	class Exile_Car_Van_Guerilla06 						{ quality = 1; price = 12000; };
	class Exile_Car_Van_Guerilla07 						{ quality = 1; price = 12000; };
	class Exile_Car_Van_Guerilla08 						{ quality = 1; price = 12000; };

	///////////////////////////////////////////////////////////////////////////////
	// Van (Box)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Box_Black 						{ quality = 1; price = 17000; };
	class Exile_Car_Van_Box_White 						{ quality = 1; price = 17000; };
	class Exile_Car_Van_Box_Red 						{ quality = 1; price = 17000; };
	class Exile_Car_Van_Box_Guerilla01 					{ quality = 1; price = 17000; };
	class Exile_Car_Van_Box_Guerilla02 					{ quality = 1; price = 17000; };
	class Exile_Car_Van_Box_Guerilla03 					{ quality = 1; price = 17000; };
	class Exile_Car_Van_Box_Guerilla04 					{ quality = 1; price = 17000; };
	class Exile_Car_Van_Box_Guerilla05 					{ quality = 1; price = 17000; };
	class Exile_Car_Van_Box_Guerilla06 					{ quality = 1; price = 17000; };
	class Exile_Car_Van_Box_Guerilla07 					{ quality = 1; price = 17000; };
	class Exile_Car_Van_Box_Guerilla08 					{ quality = 1; price = 17000; };

	///////////////////////////////////////////////////////////////////////////////
	// Van (Fuel)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Fuel_Black 						{ quality = 1; price = 15000; };
	class Exile_Car_Van_Fuel_White 						{ quality = 1; price = 15000; };
	class Exile_Car_Van_Fuel_Red 						{ quality = 1; price = 15000; };
	class Exile_Car_Van_Fuel_Guerilla01 				{ quality = 1; price = 15000; };
	class Exile_Car_Van_Fuel_Guerilla02 				{ quality = 1; price = 15000; };
	class Exile_Car_Van_Fuel_Guerilla03 				{ quality = 1; price = 15000; };

	///////////////////////////////////////////////////////////////////////////////
	// Zamak
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Zamak 								{ quality = 1; price = 43000; };

	///////////////////////////////////////////////////////////////////////////////
	// Water Scooter
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_WaterScooter						{ quality = 1; price = 800; };

	///////////////////////////////////////////////////////////////////////////////
	// RHIB
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_RHIB								{ quality = 1; price = 1500; };

	///////////////////////////////////////////////////////////////////////////////
	// Ceaser BTT
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_Ceasar							{ quality = 1; price = 15000; };

	///////////////////////////////////////////////////////////////////////////////
	// V-44 X Blackfish
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_BlackfishInfantry							{ quality = 1; price = 60000; };
	class Exile_Plane_BlackfishVehicle							{ quality = 1; price = 60000; };

	///////////////////////////////////////////////////////////////////////////////
	// Prowler
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_ProwlerLight							{ quality = 1; price = 22000; };
	class Exile_Car_ProwlerUnarmed							{ quality = 1; price = 22000; };

	///////////////////////////////////////////////////////////////////////////////
	// Qilin
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_QilinUnarmed							{ quality = 1; price = 21000; };

	///////////////////////////////////////////////////////////////////////////////
	// MB 4WD
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_MB4WD							{ quality = 1; price = 15000; };
	class Exile_Car_MB4WDOpen							{ quality = 1; price = 15000; };

	///////////////////////////////////////////////////////////////////////////////
	//chaddles edits gm vehicles mod start
	//////////////////////////////////////////////////////////////////////////////
	class gm_ge_bgs_w123_cargo							{ quality = 1; price = 1000; };
	class gm_ge_bgs_w253_cargo							{ quality = 1; price = 1000; };
	//new
	class gm_dk_army_typ1200_cargo							{ quality = 1; price = 1000; };
	class gm_dk_army_typ247_cargo							{ quality = 1; price = 1000; };
	class gm_dk_army_typ253_cargo							{ quality = 1; price = 1000; };
	class gm_dk_army_typ253_mp							{ quality = 1; price = 1000; };
	class gm_dk_army_u1300l_container							{ quality = 1; price = 1000; };
	//West Germany
	class gm_ge_army_bicycle_01_oli							{ quality = 1; price = 1000; };
	class gm_ge_army_fuchsa0_command							{ quality = 1; price = 1000; };
	class gm_ge_army_fuchsa0_engineer							{ quality = 1; price = 1000; };
	class gm_ge_army_fuchsa0_reconnaissance							{ quality = 1; price = 1000; };
	class gm_ge_army_iltis_cargo							{ quality = 1; price = 1000; };
	class gm_ge_army_iltis_mg3							{ quality = 1; price = 1000; };
	class gm_ge_army_iltis_milan							{ quality = 1; price = 1000; };
	class gm_ge_army_k125							{ quality = 1; price = 1000; };
	class gm_ge_army_kat1_451_cargo							{ quality = 1; price = 1000; };
	class gm_ge_army_kat1_451_container							{ quality = 1; price = 1000; };
	class gm_ge_army_kat1_451_reammo							{ quality = 1; price = 1000; };
	class gm_ge_army_kat1_451_refuel							{ quality = 1; price = 1000; };
	class gm_ge_army_kat1_452_container							{ quality = 1; price = 1000; };
	class gm_ge_army_kat1_454_cargo							{ quality = 1; price = 1000; };
	class gm_ge_army_kat1_454_reammo							{ quality = 1; price = 1000; };
	class gm_ge_army_kat1_463_mlrs							{ quality = 1; price = 1000; };
	class gm_ge_army_luchsa1							{ quality = 1; price = 1000; };
	class gm_ge_army_luchsa2							{ quality = 1; price = 1000; };
	class gm_ge_army_typ1200_cargo							{ quality = 1; price = 1000; };
	class gm_ge_army_typ247_cargo							{ quality = 1; price = 1000; };
	class gm_ge_army_typ247_firefighter							{ quality = 1; price = 1000; };
	class gm_ge_army_typ253_cargo							{ quality = 1; price = 1000; };
	class gm_ge_army_typ253_mp							{ quality = 1; price = 1000; };
	class gm_ge_army_u1300l_cargo							{ quality = 1; price = 1000; };
	class gm_ge_army_u1300l_container							{ quality = 1; price = 1000; };
	class gm_ge_army_u1300l_firefighter							{ quality = 1; price = 1000; };
	class gm_ge_army_u1300l_medic							{ quality = 1; price = 1000; };
	class gm_ge_army_u1300l_repair							{ quality = 1; price = 1000; };
	class gm_ge_army_w123_cargo							{ quality = 1; price = 1000; };
	class gm_ge_bgs_bicycle_01_grn							{ quality = 1; price = 1000; };
	class gm_ge_bgs_k125							{ quality = 1; price = 1000; };
	class gm_ge_bgs_typ253_cargo							{ quality = 1; price = 1000; };
	//East Germany
	class gm_gc_army_bicycle_01_oli							{ quality = 1; price = 1000; };
	class gm_gc_army_brdm2							{ quality = 1; price = 1000; };
	class gm_gc_army_brdm2rkh							{ quality = 1; price = 1000; };
	class gm_gc_army_brdm2um							{ quality = 1; price = 1000; };
	class gm_gc_army_btr60pa							{ quality = 1; price = 1000; };
	class gm_gc_army_btr60pa_dshkm							{ quality = 1; price = 1000; };
	class gm_gc_army_btr60pb							{ quality = 1; price = 1000; };
	class gm_gc_army_btr60pu12							{ quality = 1; price = 1000; };
	class gm_gc_army_p601							{ quality = 1; price = 1000; };
	class gm_gc_army_uaz469_cargo							{ quality = 1; price = 1000; };
	class gm_gc_army_uaz469_dshkm							{ quality = 1; price = 1000; };
	class gm_gc_army_uaz469_spg9							{ quality = 1; price = 1000; };
	class gm_gc_army_ural375d_cargo							{ quality = 1; price = 1000; };
	class gm_gc_army_ural375d_medic							{ quality = 1; price = 1000; };
	class gm_gc_army_ural375d_mlrs							{ quality = 1; price = 1000; };
	class gm_gc_army_ural375d_refuel							{ quality = 1; price = 1000; };
	class gm_gc_army_ural4320_cargo							{ quality = 1; price = 1000; };
	class gm_gc_army_ural4320_reammo							{ quality = 1; price = 1000; };
	class gm_gc_army_ural4320_repair							{ quality = 1; price = 1000; };
	class gm_gc_army_ural44202							{ quality = 1; price = 1000; };
	class gm_gc_bgs_p601							{ quality = 1; price = 1000; };
	class gm_gc_bgs_uaz469_cargo							{ quality = 1; price = 1000; };
	class gm_gc_bgs_uaz469_spg9							{ quality = 1; price = 1000; };
	class gm_gc_bgs_ural375d_medic							{ quality = 1; price = 1000; };
	class gm_gc_bgs_ural375d_refuel							{ quality = 1; price = 1000; };
	class gm_gc_bgs_ural4320_cargo							{ quality = 1; price = 1000; };
	class gm_gc_bgs_ural4320_reammo							{ quality = 1; price = 1000; };
	class gm_gc_bgs_ural4320_repair							{ quality = 1; price = 1000; };
	//Poland
	class gm_pl_army_brdm2							{ quality = 1; price = 1000; };
	class gm_pl_army_ot64							{ quality = 1; price = 1000; };
	class gm_pl_army_uaz469_cargo							{ quality = 1; price = 1000; };
	class gm_pl_army_uaz469_dshkm							{ quality = 1; price = 1000; };
	class gm_pl_army_ural375d_medic							{ quality = 1; price = 1000; };
	class gm_pl_army_ural375d_mlrs							{ quality = 1; price = 1000; };
	class gm_pl_army_ural375d_refuel							{ quality = 1; price = 1000; };
	class gm_pl_army_ural4320_cargo							{ quality = 1; price = 1000; };
	class gm_pl_army_ural4320_reammo							{ quality = 1; price = 1000; };
	class gm_pl_army_ural4320_repair							{ quality = 1; price = 1000; };
	//Civilians
	class gm_gc_civ_p601							{ quality = 1; price = 1000; };
	class gm_gc_civ_ural375d_cargo							{ quality = 1; price = 1000; };
	class gm_gc_dp_p601							{ quality = 1; price = 1000; };
	class gm_gc_ff_p601							{ quality = 1; price = 1000; };
	class gm_gc_pol_p601							{ quality = 1; price = 1000; };
	class gm_ge_civ_typ1200							{ quality = 1; price = 1000; };
	class gm_ge_civ_typ247							{ quality = 1; price = 1000; };
	class gm_ge_civ_typ251							{ quality = 1; price = 1000; };
	class gm_ge_civ_typ253							{ quality = 1; price = 1000; };
	class gm_ge_civ_u1300l							{ quality = 1; price = 1000; };
	class gm_ge_civ_w123							{ quality = 1; price = 1000; };
	class gm_ge_dbp_bicycle_01_ylw							{ quality = 1; price = 1000; };
	class gm_ge_dbp_typ1200							{ quality = 1; price = 1000; };
	class gm_ge_dbp_typ247							{ quality = 1; price = 1000; };
	class gm_ge_dbp_typ251							{ quality = 1; price = 1000; };
	class gm_ge_dbp_w123							{ quality = 1; price = 1000; };
	class gm_ge_ff_typ1200							{ quality = 1; price = 1000; };
	class gm_ge_ff_typ247							{ quality = 1; price = 1000; };
	class gm_ge_ff_typ247_firefighter							{ quality = 1; price = 1000; };
	class gm_ge_ff_typ253							{ quality = 1; price = 1000; };
	class gm_ge_ff_u1300l_firefighter							{ quality = 1; price = 1000; };
	class gm_ge_ff_u1300l_medic							{ quality = 1; price = 1000; };
	class gm_ge_ff_w123							{ quality = 1; price = 1000; };
	class gm_ge_pol_bicycle_01_grn							{ quality = 1; price = 1000; };
	class gm_ge_pol_typ1200							{ quality = 1; price = 1000; };
	class gm_ge_pol_typ253							{ quality = 1; price = 1000; };
	class gm_ge_pol_w123							{ quality = 1; price = 1000; };
	class gm_ge_taxi_typ253							{ quality = 1; price = 1000; };
	class gm_ge_taxi_w123							{ quality = 1; price = 1000; };
	class gm_xx_civ_bicycle_01							{ quality = 1; price = 1000; };
	//Tracked
	//Denmark
	class gm_dk_army_bibera0							{ quality = 1; price = 100000; };
	class gm_dk_army_bpz2a0							{ quality = 1; price = 100000; };
	class gm_dk_army_Leopard1a3							{ quality = 1; price = 100000; };
	class gm_dk_army_m109							{ quality = 1; price = 100000; };
	class gm_dk_army_m113a1dk_apc							{ quality = 1; price = 100000; };
	class gm_dk_army_m113a1dk_command							{ quality = 1; price = 100000; };
	class gm_dk_army_m113a1dk_engineer							{ quality = 1; price = 100000; };
	class gm_dk_army_m113a1dk_medic							{ quality = 1; price = 100000; };
	class gm_dk_army_m113a2dk							{ quality = 1; price = 100000; };
	//West Germany
	class gm_ge_army_bibera0							{ quality = 1; price = 100000; };
	class gm_ge_army_bpz2a0							{ quality = 1; price = 100000; };
	class gm_ge_army_gepard1a1							{ quality = 1; price = 100000; };
	class gm_ge_army_Leopard1a1							{ quality = 1; price = 100000; };
	class gm_ge_army_Leopard1a1a1							{ quality = 1; price = 100000; };
	class gm_ge_army_Leopard1a1a2							{ quality = 1; price = 100000; };
	class gm_ge_army_Leopard1a3							{ quality = 1; price = 100000; };
	class gm_ge_army_Leopard1a3a1							{ quality = 1; price = 100000; };
	class gm_ge_army_Leopard1a5							{ quality = 1; price = 100000; };
	class gm_ge_army_m109g							{ quality = 1; price = 100000; };
	class gm_ge_army_m113a1g_apc							{ quality = 1; price = 100000; };
	class gm_ge_army_m113a1g_apc_milan							{ quality = 1; price = 100000; };
	class gm_ge_army_m113a1g_command							{ quality = 1; price = 100000; };
	class gm_ge_army_m113a1g_medic							{ quality = 1; price = 100000; };
	class gm_ge_army_marder1a1a							{ quality = 1; price = 100000; };
	class gm_ge_army_marder1a1plus							{ quality = 1; price = 100000; };
	class gm_ge_army_marder1a2							{ quality = 1; price = 100000; };
	//East Germany
	class gm_gc_army_2p16							{ quality = 1; price = 100000; };
	class gm_gc_army_2s1							{ quality = 1; price = 100000; };
	class gm_gc_army_bmp1sp2							{ quality = 1; price = 100000; };
	class gm_gc_army_pt76b							{ quality = 1; price = 100000; };
	class gm_gc_army_t55							{ quality = 1; price = 100000; };
	class gm_gc_army_t55a							{ quality = 1; price = 100000; };
	class gm_gc_army_t55ak							{ quality = 1; price = 100000; };
	class gm_gc_army_t55am2							{ quality = 1; price = 100000; };
	class gm_gc_army_t55am2b							{ quality = 1; price = 100000; };
	class gm_gc_army_zsu234v1							{ quality = 1; price = 100000; };
	//Poland
	class gm_pl_army_2p16							{ quality = 1; price = 100000; };
	class gm_pl_army_2s1							{ quality = 1; price = 100000; };
	class gm_pl_army_bmp1sp2							{ quality = 1; price = 100000; };
	class gm_pl_army_pt76b							{ quality = 1; price = 100000; };
	class gm_pl_army_t55							{ quality = 1; price = 100000; };
	class gm_pl_army_t55a							{ quality = 1; price = 100000; };
	class gm_pl_army_t55ak							{ quality = 1; price = 100000; };
	class gm_pl_army_zsu234v1							{ quality = 1; price = 100000; };
	//Air
	//West Germany
	class gm_ge_airforce_do28d2							{ quality = 1; price = 100000; };
	class gm_ge_airforce_do28d2_medevac							{ quality = 1; price = 100000; };
	class gm_ge_army_bo105m_vbh							{ quality = 1; price = 100000; };
	class gm_ge_army_bo105p1m_vb							{ quality = 1; price = 100000; };
	class gm_ge_army_bo105p1m_vbh_swooper							{ quality = 1; price = 100000; };
	class gm_ge_army_bo105p_pah1							{ quality = 1; price = 100000; };
	class gm_ge_army_bo105p_pah1a1							{ quality = 1; price = 100000; };
	class gm_ge_army_ch53g							{ quality = 1; price = 100000; };
	class gm_ge_army_ch53gs							{ quality = 1; price = 100000; };
	class gm_ge_bgs_bo105m_vbh							{ quality = 1; price = 100000; };
	//East Germany
	class gm_gc_airforce_l410s_salon							{ quality = 1; price = 100000; };
	class gm_gc_airforce_l410t							{ quality = 1; price = 100000; };
	class gm_gc_airforce_mi2p							{ quality = 1; price = 100000; };
	class gm_gc_airforce_mi2sr							{ quality = 1; price = 100000; };
	class gm_gc_airforce_mi2t							{ quality = 1; price = 100000; };
	class gm_gc_airforce_mi2urn							{ quality = 1; price = 100000; };
	class gm_gc_airforce_mi2us							{ quality = 1; price = 100000; };
	class gm_gc_bgs_mi2p							{ quality = 1; price = 100000; };
	class gm_gc_bgs_mi2us							{ quality = 1; price = 100000; };
	//Poland
	class gm_pl_airforce_mi2ch							{ quality = 1; price = 100000; };
	class gm_pl_airforce_mi2p							{ quality = 1; price = 100000; };
	class gm_pl_airforce_mi2platan							{ quality = 1; price = 100000; };
	class gm_pl_airforce_mi2sr							{ quality = 1; price = 100000; };
	class gm_pl_airforce_mi2t							{ quality = 1; price = 100000; };
	class gm_pl_airforce_mi2urn							{ quality = 1; price = 100000; };
	class gm_pl_airforce_mi2urp							{ quality = 1; price = 100000; };
	class gm_pl_airforce_mi2urpg							{ quality = 1; price = 100000; };
	class gm_pl_airforce_mi2urs							{ quality = 1; price = 100000; };
	class gm_pl_airforce_mi2us							{ quality = 1; price = 100000; };
	//Civilians
	class gm_gc_civ_l410s_passenger							{ quality = 1; price = 100000; };
	class gm_gc_civ_l410s_salon							{ quality = 1; price = 100000; };
	class gm_gc_civ_mi2p							{ quality = 1; price = 100000; };
	class gm_gc_civ_mi2r							{ quality = 1; price = 100000; };
	class gm_gc_civ_mi2sr							{ quality = 1; price = 100000; };
	class gm_ge_adak_bo105m_vbh							{ quality = 1; price = 100000; };
	class gm_ge_pol_bo105m_vbh							{ quality = 1; price = 100000; };

	///////////////////////////////////////////////////////////////////////////////
	// Flags
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_FlagStolen1						{ quality = 1; price = 5000;  sellPrice = 5000;  };
	class Exile_Item_FlagStolen2						{ quality = 1; price = 10000; sellPrice = 10000; };
	class Exile_Item_FlagStolen3						{ quality = 1; price = 15000; sellPrice = 15000; };
	class Exile_Item_FlagStolen4						{ quality = 1; price = 20000; sellPrice = 20000; };
	class Exile_Item_FlagStolen5						{ quality = 1; price = 25000; sellPrice = 25000; };
	class Exile_Item_FlagStolen6						{ quality = 1; price = 30000; sellPrice = 30000; };
	class Exile_Item_FlagStolen7						{ quality = 1; price = 35000; sellPrice = 35000; };
	class Exile_Item_FlagStolen8						{ quality = 1; price = 40000; sellPrice = 40000; };
	class Exile_Item_FlagStolen9						{ quality = 1; price = 45000; sellPrice = 45000; };
	class Exile_Item_FlagStolen10						{ quality = 1; price = 50000; sellPrice = 50000; };
		

	///////////////////////////////////////////////////////////////////////////////
	// Extended Base Mod - file cleaned up a bit
	//////////////////////////////////////////////////////////////////////////////
	class Land_HBarrier_1_F_Kit									{ quality = 1; price = 5500; sellPrice = 50; };
	class Land_HBarrier_3_F_Kit									{ quality = 1; price = 19000; sellPrice = 50; };
	class Land_HBarrier_5_F_Kit									{ quality = 1; price = 40000; sellPrice = 50; };
	class Land_BagBunker_Tower_F_Kit							{ quality = 1; price = 100000; sellPrice = 50; };
	//class CamoNet_OPFOR_open_F_Kit							{ quality = 1; price = 1000; sellPrice = 50; };Removed
	//class CamoNet_INDP_open_F_Kit								{ quality = 1; price = 1000; sellPrice = 50; };Removed
	//class CamoNet_BLUFOR_open_F_Kit							{ quality = 1; price = 1000; sellPrice = 50; };Removed

	///////////////////////// V0.0.2
	class Land_CncBarrier_F_Kit									{ quality = 1; price = 7500; sellPrice = 50; };
	class Land_Stone_4m_F_Kit									{ quality = 1; price = 15000; sellPrice = 50; };
	class Land_Stone_Gate_F_Kit									{ quality = 1; price = 15000; sellPrice = 50; };
	class PierLadder_F_Kit										{ quality = 1; price = 75000; sellPrice = 50; };
	class Land_WaterCooler_01_new_F_Kit							{ quality = 1; price = 180000; sellPrice = 50; };

	///////////////////////// V0.0.3
	class Land_Pallet_MilBoxes_F_Kit							{ quality = 1; price = 39990; sellPrice = 50; };
	class Land_Cargo20_military_green_F_Kit						{ quality = 1; price = 50000; sellPrice = 50; };
	class Land_BagFence_Corner_F_Kit							{ quality = 1; price = 10000; sellPrice = 50; };
	class Land_BagFence_Long_F_Kit								{ quality = 1; price = 10000; sellPrice = 50; };
	class Land_HBarrierTower_F_Kit								{ quality = 1; price = 75000; sellPrice = 50; };
	class Land_Metal_wooden_rack_F_Kit							{ quality = 1; price = 38000; sellPrice = 50; };
	class Land_BagBunker_Small_F_Kit							{ quality = 1; price = 65000; sellPrice = 50; };
	class Land_Bunker_F_Kit										{ quality = 1; price = 750000; sellPrice = 50; };
	class Land_HBarrierWall_corner_F_Kit						{ quality = 1; price = 50000; sellPrice = 50; };
	class Land_HBarrierWall6_F_Kit								{ quality = 1; price = 60000; sellPrice = 50; };
	class Land_HBarrierWall4_F_Kit								{ quality = 1; price = 35000; sellPrice = 50; };
	class Land_RampConcrete_F_Kit								{ quality = 1; price = 55000; sellPrice = 50; };

	///////////////////////// V0.0.4
	class Land_Wall_IndCnc_4_F_Kit								{ quality = 1; price = 50000; sellPrice = 50; };
	class Land_City2_4m_F_Kit									{ quality = 1; price = 60000; sellPrice = 50; };
	class Land_City2_8m_F_Kit									{ quality = 1; price = 60000; sellPrice = 50; };
	class Land_HelipadCivil_F_Kit								{ quality = 1; price = 100000; sellPrice = 50; };
	class Land_Rack_F_Kit										{ quality = 1; price = 35000; sellPrice = 50; };

	///////////////////////// V0.1.0
	class Land_City_Gate_F_Kit									{ quality = 1; price = 20000; sellPrice = 50; };
	class Land_BarGate_F_Kit									{ quality = 1; price = 20000; sellPrice = 50; };
	class Land_Icebox_F_Kit										{ quality = 1; price = 45000; sellPrice = 50; };
	class Land_Sign_WarningMilitaryArea_F_Kit					{ quality = 1; price = 1000; sellPrice = 50; };
	class Land_Mil_WallBig_4m_F_Kit								{ quality = 1; price = 60000; sellPrice = 50; };
	class Land_Cargo_Patrol_V2_F_Kit							{ quality = 1; price = 185000; sellPrice = 50; };

	///////////////////////// V0.1.1
	class Land_Pier_small_F_Kit									{ quality = 1; price = 75000; sellPrice = 50; };
	class Land_Wall_Tin_4_Kit									{ quality = 1; price = 50000; sellPrice = 50; };

	///////////////////////// V0.1.2
	class Land_Tank_rust_F_Kit									{ quality = 1; price = 50000; sellPrice = 50; };
	class Land_ShelvesMetal_F_Kit								{ quality = 1; price = 50000; sellPrice = 50; };
	class Land_Cargo_Tower_V2_F_Kit								{ quality = 1; price = 750000; sellPrice = 50; };
	class Land_FuelStation_Feed_F_Kit							{ quality = 1; price = 220000; sellPrice = 50; };
	class Land_BagBunker_Large_F_Kit							{ quality = 1; price = 100000; sellPrice = 50; };
	class ShootingPos_F_Kit										{ quality = 1; price = 1000; sellPrice = 50; };
	///////////////////////// V0.1.3
	class Land_cargo_house_slum_F_Kit							{ quality = 1; price = 25000; sellPrice = 50; };
	class Land_Cargo40_light_green_F_Kit						{ quality = 1; price = 130000; sellPrice = 50; };
	class Land_Cargo_House_V2_F_Kit								{ quality = 1; price = 200000; sellPrice = 50; };
	class Land_LampHalogen_F_Kit								{ quality = 1; price = 65200; sellPrice = 50; };

	///////////////////////// V0.1.4
	class Land_LampAirport_F_Kit								{ quality = 1; price = 85600; sellPrice = 50; };
	class Land_CncShelter_F_Kit									{ quality = 1; price = 40000; sellPrice = 50; };
	class Land_Wall_IndCnc_2deco_F_Kit							{ quality = 1; price = 60000; sellPrice = 50; };
	class Land_CncWall4_F_Kit									{ quality = 1; price = 60000; sellPrice = 50; };
	class Land_FuelStation_Shed_F_Kit							{ quality = 1; price = 65000; sellPrice = 50; };
	class Land_Shed_Small_F_Kit									{ quality = 1; price = 100000; sellPrice = 50; };
	class Land_Razorwire_F_Kit									{ quality = 1; price = 5000; sellPrice = 50; };

	///////////////////////// V0.1.5
	class Land_u_Addon_01_V1_F_Kit								{ quality = 1; price = 50000; sellPrice = 50; }; //brokenshed
	class Land_Cargo20_sand_F_Kit								{ quality = 1; price = 80000; sellPrice = 50; };
	class Land_GH_Stairs_F_Kit									{ quality = 1; price = 50000; sellPrice = 50; };
	class Land_i_Garage_V2_F_Kit								{ quality = 1; price = 125000; sellPrice = 50; };
	class Land_GH_Platform_F_Kit								{ quality = 1; price = 50000; sellPrice = 50; };
	class Land_TentDome_F_Kit									{ quality = 1; price = 1000; sellPrice = 50; };
	class Land_TentHangar_V1_F_Kit								{ quality = 1; price = 350000; sellPrice = 50; };

	///////////////////////// V0.1.6
	class Land_CncWall1_F_Kit									{ quality = 1; price = 15000; sellPrice = 50; };
	class Land_CncBarrierMedium_F_Kit							{ quality = 1; price = 15000; sellPrice = 50; };
	class Land_Crash_barrier_F_Kit								{ quality = 1; price = 10000; sellPrice = 50; };
	class Land_Shed_Big_F_Kit									{ quality = 1; price = 75000; sellPrice = 50; };
	class Land_TouristShelter_01_F_Kit							{ quality = 1; price = 50000; sellPrice = 50; };
	class Land_Water_source_F_Kit								{ quality = 1; price = 100000; sellPrice = 50; };
	class Land_Sign_WarningMilitaryVehicles_F_Kit				{ quality = 1; price = 10000; sellPrice = 50; };
	class Land_Sign_WarningMilAreaSmall_F_Kit					{ quality = 1; price = 10000; sellPrice = 50; };
	class Land_Concrete_SmallWall_8m_F_Kit						{ quality = 1; price = 20000; sellPrice = 50; };
	class Land_Concrete_SmallWall_4m_F_Kit						{ quality = 1; price = 20000; sellPrice = 50; };

	///////////////////////// V0.1.7
	class Land_PortableLight_double_F_Kit						{ quality = 1; price = 25000; sellPrice = 50; };
	class Land_Radar_Small_F_Kit								{ quality = 1; price = 150000; sellPrice = 50; };
	class Land_Cargo_addon02_V2_F_Kit							{ quality = 1; price = 20000; sellPrice = 50; }; //Slumplane
	class Land_TableDesk_F_Kit									{ quality = 1; price = 20000; sellPrice = 50; };
	class Land_ToiletBox_F_Kit									{ quality = 1; price = 10000; sellPrice = 50; };
	//class Land_Pier_Box_F_Kit									{ quality = 1; price = 500000; sellPrice = 50; }; Removed

	///////////////////////// V0.1.8
	class Land_ChairWood_F_Kit									{ quality = 1; price = 1000; sellPrice = 50; };
	class BlockConcrete_F_Kit									{ quality = 1; price = 20000; sellPrice = 50; };
	class Land_CargoBox_V1_F_Kit								{ quality = 1; price = 60000; sellPrice = 50; };
	class Land_IndFnc_3_F_Kit									{ quality = 1; price = 10000; sellPrice = 50; };
	class Land_IndFnc_9_F_Kit									{ quality = 1; price = 30000; sellPrice = 50; };
	class Land_Sea_Wall_F_Kit									{ quality = 1; price = 100000; sellPrice = 50; };
	class Land_i_Addon_03_V1_F_Kit								{ quality = 1; price = 50000; sellPrice = 50; }; //Tavern
	class Land_i_Addon_03mid_V1_F_Kit							{ quality = 1; price = 50000; sellPrice = 50; }; //Tavernmiddle
	class Land_LampStreet_F_Kit									{ quality = 1; price = 30000; sellPrice = 50; };

	///////////////////////// V0.1.9
	class Land_Dome_Big_F_Kit									{ quality = 1; price = 300000; sellPrice = 50; };
	class Land_Hangar_F_Kit										{ quality = 1; price = 500000; sellPrice = 50; };
	class Land_Metal_Shed_F_Kit									{ quality = 1; price = 30000; sellPrice = 50; };
	class Land_spp_Tower_F_Kit									{ quality = 1; price = 700000; sellPrice = 50; };
	class Land_Sun_chair_F_Kit									{ quality = 1; price = 5000; sellPrice = 50; };
	class Land_Sunshade_04_F_Kit								{ quality = 1; price = 5000; sellPrice = 50; };
	class Land_LampShabby_F_Kit									{ quality = 1; price = 20000; sellPrice = 50; };

	///////////////////////// V0.2.0
	class Land_Airport_Tower_F_Kit								{ quality = 1; price = 200000; sellPrice = 50; };
	class Land_i_Barracks_V1_F_Kit								{ quality = 1; price = 250000; sellPrice = 50; };
	class Land_BeachBooth_01_F_Kit								{ quality = 1; price = 10000; sellPrice = 50; };
	class Land_Castle_01_tower_F_Kit							{ quality = 1; price = 100000; sellPrice = 50; };
	class Land_Sign_WarningUnexplodedAmmo_F_Kit					{ quality = 1; price = 1000; sellPrice = 50; };
	class Land_TTowerSmall_1_F_Kit								{ quality = 1; price = 20000; sellPrice = 50; };

	///////////////////////// V0.2.2
	class Exile_Plant_GreenBush_Kit								{ quality = 1; price = 10000; sellPrice = 50; };
	//class Land_nav_pier_m_F_Kit								{ quality = 1; price = 200000; sellPrice = 50; };Removed
	class Land_SharpStone_01_F_Kit								{ quality = 1; price = 26000; sellPrice = 50; };
	class Land_SharpStone_02_F_Kit								{ quality = 1; price = 25000; sellPrice = 50; };
	class Land_Sleeping_bag_F_Kit								{ quality = 1; price = 10000; sellPrice = 50; };
	class Land_Small_Stone_02_F_Kit								{ quality = 1; price = 23000; sellPrice = 50; };
	class Land_SolarPanel_2_F_Kit								{ quality = 1; price = 30000; sellPrice = 50; };
	class Land_spp_Panel_F_Kit									{ quality = 1; price = 35000; sellPrice = 50; };

	///////////////////////// V0.2.3
	class Land_CampingChair_V2_F_Kit							{ quality = 1; price = 10000; sellPrice = 50; };
	class Land_CampingChair_V1_F_Kit							{ quality = 1; price = 10000; sellPrice = 50; };
	class Land_Camping_Light_F_Kit								{ quality = 1; price = 10000; sellPrice = 50; };
	class Land_CampingTable_F_Kit								{ quality = 1; price = 10000; sellPrice = 50; };
	class MapBoard_altis_F_Kit									{ quality = 1; price = 8000; sellPrice = 50; };
	class Land_Pavement_narrow_F_Kit							{ quality = 1; price = 5000; sellPrice = 50; };
	class Land_Pavement_narrow_corner_F_Kit						{ quality = 1; price = 5000; sellPrice = 50; };
	class Land_Pavement_wide_F_Kit								{ quality = 1; price = 5000; sellPrice = 50; };
	class Land_Pavement_wide_corner_F_Kit						{ quality = 1; price = 5000; sellPrice = 50; };

	///////////////////////// V0.2.4
	class Exile_ConcreteMixer_Kit								{ quality = 1; price = 500000; sellPrice = 50; };
	class Flag_CSAT_F_Kit										{ quality = 1; price = 5000; sellPrice = 50; };
	class Land_GarbageContainer_closed_F_Kit					{ quality = 1; price = 3000; sellPrice = 50; };
	class Land_Metal_rack_F_Kit									{ quality = 1; price = 50000; sellPrice = 50; };
	class Land_Sink_F_Kit										{ quality = 1; price = 27000; sellPrice = 50; };

	///////////////////////// V0.2.5
	class Land_Atm_02_F_Kit										{ quality = 1; price = 100000; sellPrice = 50; };

	///////////////////////// V0.2.6
	
	//class Land_PillboxBunker_01_big_F_Kit						{ quality = 1; price = 150000; sellPrice = 50; };
	class Land_BagBunker_01_small_green_F_Kit					{ quality = 1; price = 75000; sellPrice = 50; };
	//class Land_PillboxBunker_01_rectangle_F_Kit				{ quality = 1; price = 120000; sellPrice = 50; };
	//class Land_PillboxBunker_01_hex_F_Kit						{ quality = 1; price = 110000; sellPrice = 50; };
	//class Land_PillboxWall_01_3m_F_Kit						{ quality = 1; price = 6000; sellPrice = 50; };
	//class Land_PillboxWall_01_6m_F_Kit						{ quality = 1; price = 10000; sellPrice = 50; };
	//class Land_Airport_01_controlTower_F_Kit					{ quality = 1; price = 60000; sellPrice = 50; };
	class Land_HBarrier_01_line_3_green_F_Kit					{ quality = 1; price = 6000; sellPrice = 50; };
	class Land_HBarrier_01_line_5_green_F_Kit					{ quality = 1; price = 8000; sellPrice = 50; };
	class Land_HBarrier_01_tower_green_F_Kit					{ quality = 1; price = 50000; sellPrice = 50; }; //changed
	//class Land_trench_01_forest_F_Kit							{ quality = 1; price = 9500; sellPrice = 50; };
	//class Land_trench_01_grass_F_Kit							{ quality = 1; price = 9500; sellPrice = 50; };
	//class Land_GarageShelter_01_F_Kit							{ quality = 1; price = 20000; sellPrice = 50; }; //V0.2.7
	class Land_HBarrier_01_big_tower_green_F_Kit				{ quality = 1; price = 20000; sellPrice = 50; }; //V0.2.8
	class Land_Bagbunker_01_large_green_F_Kit					{ quality = 1; price = 20000; sellPrice = 50; }; //V0.2.8
	class Land_Bagfence_01_short_green_F_Kit					{ quality = 1; price = 2000; sellPrice = 50; }; //V0.2.8
	class Land_Bagfence_01_long_green_F_Kit						{ quality = 1; price = 2000; sellPrice = 50; }; //V0.2.8
	//class Land_PetroglyphWall_02_F_Kit						{ quality = 1; price = 8500; sellPrice = 50; }; //V0.2.8
	//class Land_PetroglyphWall_01_F_Kit						{ quality = 1; price = 8500; sellPrice = 50; }; //V0.2.8
	class Land_IRMaskingCover_02_F_Kit							{ quality = 1; price = 15000; sellPrice = 50; }; //V0.2.8
	class Land_IRMaskingCover_01_F_Kit							{ quality = 1; price = 10000; sellPrice = 50; }; //V0.2.8
	//class Land_Breakwater_02_F_Kit							{ quality = 1; price = 35000; sellPrice = 50; }; //V0.2.8
	//class Land_Breakwater_01_F_Kit							{ quality = 1; price = 35000; sellPrice = 50; }; //V0.2.8
	//class Land_BasaltWall_01_gate_F_Kit						{ quality = 1; price = 150000; sellPrice = 50; }; //V0.2.8
	//class Land_BasaltWall_01_8m_F_Kit							{ quality = 1; price = 15000; sellPrice = 50; }; //V0.2.8
	//class Land_BasaltWall_01_4m_F_Kit							{ quality = 1; price = 15000; sellPrice = 50; }; //V0.2.8
	class Land_Ammobox_rounds_F_Kit								{ quality = 1; price = 2000; sellPrice = 50; }; //V0.2.8
	class Land_Airport_01_hangar_F_Kit							{ quality = 1; price = 50000; sellPrice = 50; }; //V0.2.8
	

	///////////////////////// V0.2.7
	class Land_i_House_Small_03_V1_F_Kit						{ quality = 1; price = 25000; sellPrice = 50; };
	class Land_i_House_Big_01_V2_F_Kit							{ quality = 1; price = 50000; sellPrice = 50; };
	class Land_PlasticCase_01_medium_F_Kit						{ quality = 1; price = 8000; sellPrice = 50; };
	class Land_Research_HQ_F_Kit								{ quality = 1; price = 50000; sellPrice = 50; };
	class Land_Research_house_V1_F_Kit							{ quality = 1; price = 40000; sellPrice = 50; };

	///////////////////////// V0.2.8
	class Land_Suitcase_F_Kit									{ quality = 1; price = 40000; sellPrice = 50; };
	class B_Slingload_01_fuel_F_Kit								{ quality = 1; price = 70000; sellPrice = 50; };
	class B_Slingload_01_Ammo_F_Kit								{ quality = 1; price = 70000; sellPrice = 50; };

	///////////////////////// V0.3.1
	class Land_FlatTV_01_F_Kit									{ quality = 1; price = 5000; sellPrice = 50; };
	class Land_ChairPlastic_F_Kit								{ quality = 1; price = 1000; sellPrice = 50; };
	class Land_GamingSet_01_console_F_Kit						{ quality = 1; price = 70000; sellPrice = 50; };
	class Land_GamingSet_01_controller_F_Kit					{ quality = 1; price = 70000; sellPrice = 50; };
	class Land_GymBench_01_F_Kit								{ quality = 1; price = 5000; sellPrice = 50; };
	class Land_GymRack_03_F_Kit									{ quality = 1; price = 5000; sellPrice = 50; };
	class Land_OfficeCabinet_01_F_Kit							{ quality = 1; price = 1000; sellPrice = 50; };
	class Land_OfficeChair_01_F_Kit								{ quality = 1; price = 1000; sellPrice = 50; };
	class Land_PCSet_01_case_F_Kit								{ quality = 1; price = 70000; sellPrice = 50; };
	class Land_PCSet_01_keyboard_F_Kit							{ quality = 1; price = 70000; sellPrice = 50; };
	class Land_PCSet_01_mouse_F_Kit								{ quality = 1; price = 70000; sellPrice = 50; };
	class Land_PCSet_01_screen_F_Kit							{ quality = 1; price = 70000; sellPrice = 50; };
	class Land_Printer_01_F_Kit									{ quality = 1; price = 3000; sellPrice = 50; };
	class Land_RattanChair_01_F_Kit								{ quality = 1; price = 1000; sellPrice = 50; };
	class Land_RattanTable_01_F_Kit								{ quality = 1; price = 1000; sellPrice = 50; };
	class Land_Sleeping_bag_blue_F_Kit							{ quality = 1; price = 1000; sellPrice = 50; };
	class Land_Sleeping_bag_brown_F_Kit							{ quality = 1; price = 1000; sellPrice = 50; };
	class Land_Trophy_01_bronze_F_Kit							{ quality = 1; price = 50000; sellPrice = 50; };
	class Land_Trophy_01_gold_F_Kit								{ quality = 1; price = 100000; sellPrice = 50; };
	class Land_Trophy_01_silver_F_Kit							{ quality = 1; price = 80000; sellPrice = 50; };
	class Land_Sun_chair_green_F_Kit							{ quality = 1; price = 2000; sellPrice = 50; };
	class Land_Sunshade_01_F_Kit								{ quality = 1; price = 2000; sellPrice = 50; };
	class Land_Sunshade_02_F_Kit								{ quality = 1; price = 2000; sellPrice = 50; };
	class Land_Sunshade_03_F_Kit								{ quality = 1; price = 2000; sellPrice = 50; };
	class Land_Sunshade_F_Kit									{ quality = 1; price = 2000; sellPrice = 50; };
	class Land_TablePlastic_01_F_Kit							{ quality = 1; price = 2000; sellPrice = 50; };
	class Land_WoodenTable_large_F_Kit							{ quality = 1; price = 2000; sellPrice = 50; };
	class Land_WoodenTable_small_F_Kit							{ quality = 1; price = 2000; sellPrice = 50; };
	class OfficeTable_01_new_F_Kit								{ quality = 1; price = 2000; sellPrice = 50; };
	class Land_DieselGroundPowerUnit_01_F_Kit					{ quality = 1; price = 70000; sellPrice = 50; };
	class Land_EngineCrane_01_F_Kit								{ quality = 1; price = 25000; sellPrice = 50; };
	class Land_PalletTrolley_01_yellow_F_Kit					{ quality = 1; price = 20000; sellPrice = 50; };
	class Land_PressureWasher_01_F_Kit							{ quality = 1; price = 20000; sellPrice = 50; };
	class Land_WeldingTrolley_01_F_Kit							{ quality = 1; price = 20000; sellPrice = 50; };
	class Land_Workbench_01_F_Kit								{ quality = 1; price = 5000; sellPrice = 50; };
	class ArrowDesk_L_F_Kit										{ quality = 1; price = 1000; sellPrice = 50; };
	class ArrowDesk_R_F_Kit										{ quality = 1; price = 1000; sellPrice = 50; };
	class PlasticBarrier_02_grey_F_Kit							{ quality = 1; price = 5000; sellPrice = 50; };
	class PlasticBarrier_02_yellow_F_Kit						{ quality = 1; price = 5000; sellPrice = 50; };
	class PlasticBarrier_03_blue_F_Kit							{ quality = 1; price = 5000; sellPrice = 50; };
	class PlasticBarrier_03_orange_F_Kit						{ quality = 1; price = 5000; sellPrice = 50; };
	class RoadBarrier_F_Kit										{ quality = 1; price = 1000; sellPrice = 50; };
	class RoadBarrier_small_F_Kit								{ quality = 1; price = 1000; sellPrice = 50; };
	class RoadCone_F_Kit										{ quality = 1; price = 1000; sellPrice = 50; };
	class RoadCone_L_F_Kit										{ quality = 1; price = 1000; sellPrice = 50; };
	class TapeSign_F_Kit										{ quality = 1; price = 1000; sellPrice = 50; };
	class Land_Target_Dueling_01_F_Kit							{ quality = 1; price = 3000; sellPrice = 50; };
	class TargetP_Inf_F_Kit										{ quality = 1; price = 3000; sellPrice = 50; };
	class Fridge_01_closed_F_Kit								{ quality = 1; price = 1000; sellPrice = 50; };
	class Land_MetalCase_01_large_F_Kit							{ quality = 1; price = 15000; sellPrice = 50; };
	class Land_Microwave_01_F_Kit								{ quality = 1; price = 1000; sellPrice = 50; };
	class Land_ShelvesWooden_F_Kit								{ quality = 1; price = 5000; sellPrice = 50; };
	class Land_ShelvesWooden_blue_F_Kit							{ quality = 1; price = 5000; sellPrice = 50; };
	class Land_ShelvesWooden_khaki_F_Kit						{ quality = 1; price = 5000; sellPrice = 50; };
	class Land_ToolTrolley_01_F_Kit								{ quality = 1; price = 12000; sellPrice = 50; };
	class Land_ToolTrolley_02_F_Kit								{ quality = 1; price = 12000; sellPrice = 50; };
	class Land_Sign_Mines_F_Kit									{ quality = 1; price = 1000; sellPrice = 50; };
	class Land_PortableHelipadLight_01_F_Kit					{ quality = 1; price = 10000; sellPrice = 50; };
	class PortableHelipadLight_01_blue_F_Kit					{ quality = 1; price = 10000; sellPrice = 50; };
	class PortableHelipadLight_01_green_F_Kit					{ quality = 1; price = 10000; sellPrice = 50; };
	class PortableHelipadLight_01_red_F_Kit						{ quality = 1; price = 10000; sellPrice = 50; };
	class PortableHelipadLight_01_white_F_Kit					{ quality = 1; price = 10000; sellPrice = 50; };
	class PortableHelipadLight_01_yellow_F_Kit					{ quality = 1; price = 10000; sellPrice = 50; };
	class Land_GamingSet_01_powerSupply_F_Kit					{ quality = 1; price = 80000; sellPrice = 50; };
	class Land_GamingSet_01_camera_F_Kit						{ quality = 1; price = 80000; sellPrice = 50; };
	class WaterPump_01_forest_F_Kit								{ quality = 1; price = 70000; sellPrice = 50; };
	class WaterPump_01_sand_F_Kit								{ quality = 1; price = 70000; sellPrice = 50; };
	class Land_TripodScreen_01_large_F_Kit						{ quality = 1; price = 60000; sellPrice = 50; };
	class Land_TripodScreen_01_dual_v2_F_Kit					{ quality = 1; price = 50000; sellPrice = 50; };
	class Land_TripodScreen_01_dual_v1_F_Kit					{ quality = 1; price = 50000; sellPrice = 50; };
	class TargetP_Inf_Acc2_F_Kit								{ quality = 1; price = 3000; sellPrice = 50; };
	class TargetBootcampHuman_F_Kit								{ quality = 1; price = 3000; sellPrice = 50; };
	class Target_F_Kit											{ quality = 1; price = 3000; sellPrice = 50; };
	class Land_SatelliteAntenna_01_F_Kit						{ quality = 1; price = 10000; sellPrice = 50; };
	class Land_Projector_01_F_Kit								{ quality = 1; price = 1000; sellPrice = 50; };
	class Land_PortableGenerator_01_F_Kit						{ quality = 1; price = 20000; sellPrice = 50; };
	class Land_Obstacle_Ramp_F_Kit								{ quality = 1; price = 10000; sellPrice = 50; };
	class MetalBarrel_burning_F_Kit								{ quality = 1; price = 10000; sellPrice = 50; };

	///////////////////////// V0.3.1
	class EBM_Brickwall_window_Kit								{ quality = 1; price = 3000; sellPrice = 50; };
	class EBM_Brickwall_stairs_Kit								{ quality = 1; price = 1000; sellPrice = 50; };
	class EBM_Brickwall_floorport_door_Kit						{ quality = 1; price = 10000; sellPrice = 50; };
	class EBM_Brickwall_floorport_Kit							{ quality = 1; price = 1000; sellPrice = 50; };
	class EBM_Brickwall_floor_Kit								{ quality = 1; price = 1000; sellPrice = 50; };
	class EBM_Brickwall_door_Kit								{ quality = 1; price = 5000; sellPrice = 50; };
	class EBM_Brickwall_hole_Kit								{ quality = 1; price = 1000; sellPrice = 50; };
	class EBM_Helipad_Kit										{ quality = 1; price = 50000; sellPrice = 50; };
	class EBM_Airhook_Kit										{ quality = 1; price = 10000; sellPrice = 50; };
	class EBM_Parksign_Kit										{ quality = 1; price = 500; sellPrice = 50; };
	class EBM_Brickwall_Kit										{ quality = 1; price = 1000; sellPrice = 50; };

	///////////////////////// V0.3.4
	class EBM_Metalwall_window_Kit								{ quality = 1; price = 30000; sellPrice = 50; };
	class EBM_Metalwall_stairs_Kit								{ quality = 1; price = 10000; sellPrice = 50; };
	class EBM_Metalwall_floorport_door_Kit						{ quality = 1; price = 100000; sellPrice = 50; };
	class EBM_Metalwall_floorport_Kit							{ quality = 1; price = 20000; sellPrice = 50; };
	class EBM_Metalwall_floor_Kit								{ quality = 1; price = 10000; sellPrice = 50; };
	class EBM_Metalwall_door_Kit								{ quality = 1; price = 50000; sellPrice = 50; };
	class EBM_Metalwall_hole_Kit								{ quality = 1; price = 20000; sellPrice = 50; };
	class EBM_Metalwall_half_Kit								{ quality = 1; price = 20000; sellPrice = 50; };
	class EBM_Metalwall_Kit										{ quality = 1; price = 10000; sellPrice = 50; };
	class EBM_Medikit_Kit										{ quality = 1; price = 50000; sellPrice = 50; };
	class EBM_pollard_Kit										{ quality = 1; price = 10000; sellPrice = 50; };
	class EBM_ATM_Kit											{ quality = 1; price = 10000; sellPrice = 50; };	
	
};



class CfgExileCustomCode 
{
	/*
		You can overwrite every single file of our code without touching it.
		To do that, add the function name you want to overwrite plus the 
		path to your custom file here. If you wonder how this works, have a
		look at our bootstrap/fn_preInit.sqf function.Simply add the following scheme here:

		<Function Name of Exile> = "<New File Name>";

		Example:

		ExileClient_util_fusRoDah = "myaddon\myfunction.sqf";
	*/

	///KARREN FIX
	ExileServer_system_trading_network_purchaseVehicleRequest = "custom\ExileServer_system_trading_network_purchaseVehicleRequest.sqf";
	///BOX VERKAUF
	ExileClient_gui_traderDialog_updateInventoryDropdown = "overrides\ExileClient_gui_traderDialog_updateInventoryDropdown.sqf";
	ExileClient_gui_wasteDumpDialog_show = "overrides\ExileClient_gui_wasteDumpDialog_show.sqf";
	ExileServer_system_trading_network_wasteDumpRequest = "overrides\ExileServer_system_trading_network_wasteDumpRequest.sqf";	
	///ABHOLZEN
	ExileServer_object_tree_network_chopTreeRequest = "overrides\AbHolzen\ExileServer_object_tree_network_chopTreeRequest.sqf";
	///Statusbar
	ExileServer_system_database_connect = "Custom\ExileServer_system_database_connect.sqf";	
	//EBM
	Exileclient_system_lootmanager_thread_spawn = "Custom\Exileclient_system_lootmanager_thread_spawn.sqf";	
    ///KILL NACHRICHT
	ExileServer_object_player_event_onMpKilled = "addons\KillMessage\ExileServer_object_player_event_onMpKilled.sqf";
    ExileServer_util_getFragPerks = "addons\KillMessage\ExileServer_util_getFragPerks.sqf";	
	///
	ExileServer_world_initialize = "Exile_Server_Overrides\ExileServer_world_initialize.sqf";
	ExileServer_util_time_uptime = "Exile_Server_Overrides\ExileServer_util_time_uptime.sqf";
	ExileServer_util_time_addTime = "Exile_Server_Overrides\ExileServer_util_time_addTime.sqf";
	ExileServer_util_time_currentTime = "Exile_Server_Overrides\ExileServer_util_time_currentTime.sqf";
	//ExileServer_system_database_connect = "Exile_Server_Overrides\ExileServer_system_database_connect.sqf";
	ExileServer_system_database_handleBig = "Exile_Server_Overrides\ExileServer_system_database_handleBig.sqf";
	ExileServer_system_process_noobFilter = "Exile_Server_Overrides\ExileServer_system_process_noobFilter.sqf";
	ExileServer_object_player_createBambi = "Exile_Server_Overrides\ExileServer_object_player_createBambi.sqf";///////
	ExileServer_object_player_database_load = "Exile_Server_Overrides\ExileServer_object_player_database_load.sqf";
	ExileServer_object_vehicle_database_load = "Exile_Server_Overrides\ExileServer_object_vehicle_database_load.sqf";
	//ExileServer_object_player_event_onMpKilled = "Exile_Server_Overrides\ExileServer_object_player_event_onMpKilled.sqf";//////
	ExileServer_object_container_database_load = "Exile_Server_Overrides\ExileServer_object_container_database_load.sqf";
	ExileServer_object_container_database_insert = "Exile_Server_Overrides\ExileServer_object_container_database_insert.sqf";
	ExileServer_system_territory_database_insert = "Exile_Server_Overrides\ExileServer_system_territory_database_insert.sqf";
	ExileServer_object_container_database_update = "Exile_Server_Overrides\ExileServer_object_container_database_update.sqf";
	ExileServer_object_container_createContainer = "Exile_Server_Overrides\ExileServer_object_container_createContainer.sqf";
	ExileServer_system_database_query_selectFull = "Exile_Server_Overrides\ExileServer_system_database_query_selectFull.sqf";
	ExileServer_object_construction_database_load = "Exile_Server_Overrides\ExileServer_object_construction_database_load.sqf";///// 
	ExileServer_system_database_query_insertSingle = "Exile_Server_Overrides\ExileServer_system_database_query_insertSingle.sqf";
	ExileServer_system_database_query_selectSingle = "Exile_Server_Overrides\ExileServer_system_database_query_selectSingle.sqf";
	ExileServer_object_construction_database_insert = "Exile_Server_Overrides\ExileServer_object_construction_database_insert.sqf";
	ExileServer_system_simulationMonitor_initialize = "Exile_Server_Overrides\ExileServer_system_simulationMonitor_initialize.sqf";
	ExileServer_system_database_query_fireAndForget = "Exile_Server_Overrides\ExileServer_system_database_query_fireAndForget.sqf";
	ExileServer_object_vehicle_createPersistentVehicle = "Exile_Server_Overrides\ExileServer_object_vehicle_createPersistentVehicle.sqf";
	ExileServer_system_trading_network_sellItemRequest = "Exile_Server_Overrides\ExileServer_system_trading_network_sellItemRequest.sqf";
	ExileServer_system_database_query_selectSingleField = "Exile_Server_Overrides\ExileServer_system_database_query_selectSingleField.sqf";
	//ExileServer_system_trading_network_wasteDumpRequest = "Exile_Server_Overrides\ExileServer_system_trading_network_wasteDumpRequest.sqf";//////
	ExileServer_object_vehicle_createNonPersistentVehicle = "Exile_Server_Overrides\ExileServer_object_vehicle_createNonPersistentVehicle.sqf";
	ExileServer_system_territory_network_purchaseTerritory = "Exile_Server_Overrides\ExileServer_system_territory_network_purchaseTerritory.sqf";
	ExileServer_system_territory_network_flagStolenRequest = "Exile_Server_Overrides\ExileServer_system_territory_network_flagStolenRequest.sqf";
	ExileServer_system_trading_network_purchaseItemRequest = "Exile_Server_Overrides\ExileServer_system_trading_network_purchaseItemRequest.sqf";
	ExileServer_system_territory_network_restoreFlagRequest = "Exile_Server_Overrides\ExileServer_system_territory_network_restoreFlagRequest.sqf";
	//ExileServer_system_trading_network_purchaseVehicleRequest = "Exile_Server_Overrides\ExileServer_system_trading_network_purchaseVehicleRequest.sqf";////
	ExileServer_system_territory_network_payFlagRansomRequest = "Exile_Server_Overrides\ExileServer_system_territory_network_payFlagRansomRequest.sqf";
	ExileServer_object_vehicle_network_retrieveVehicleRequest = "Exile_Server_Overrides\ExileServer_object_vehicle_network_retrieveVehicleRequest.sqf";
	ExileServer_system_territory_maintenance_recalculateDueDate = "Exile_Server_Overrides\ExileServer_system_territory_maintenance_recalculateDueDate.sqf";
	ExileServer_system_territory_network_territoryUpgradeRequest = "Exile_Server_Overrides\ExileServer_system_territory_network_territoryUpgradeRequest.sqf";
	ExileServer_system_trading_network_purchaseVehicleSkinRequest = "Exile_Server_Overrides\ExileServer_system_trading_network_purchaseVehicleSkinRequest.sqf";
	ExileServer_system_territory_network_payTerritoryProtectionMoneyRequest = "Exile_Server_Overrides\ExileServer_system_territory_network_payTerritoryProtectionMoneyRequest.sqf";


	//#include "CfgExileCustomCode.cpp"
};


class CfgExileEnvironment
{
	class Altis 
	{
		class FireFlies
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// At this hour fire flies begin to spawn
			startHour = 18;

			// At this hour fire flies stop spawning
			endHour = 4;
		};

		class Anomalies
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// At this hour anomalies begin to spawn
			startHour = 19;

			// At this hour anomalies stop spawning
			endHour = 6;
		};

		class Breathing
		{
			// 1 = enabled, 0 = disabled
			enable = 0;
		};

		class Snow
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// https://community.bistudio.com/wiki/surfaceType
			surfaces[] = {};
		};

		class Radiation 
		{
			// 1 = enabled, 0 = disabled
			enable = 1;
		};

		class Temperature
		{
			// Temperature in °C for the time of day, per hour
			// Add the first index to the last index, so it is 25 indizes!
			daytimeTemperature[] = {15.93,16.89,18.42,20.40,22.68,25.10,27.48,29.63,31.40,32.66,33.32,33.80,33.80,33.32,32.66,31.40,29.63,27.48,25.10,22.68,20.40,18.42,16.89,15.93,15.93};
		
			// Temperature change in °C when it is 100% overcast
			overcast = -2;

			// Temperature change in °C when it is 100% raining
			rain = -5;

			// Temperature change in °C when it is 100% windy
			wind = -1;

			// Temperature change per 100m altitude in °C
			altitude = -0.5;

			// Difference from the daytime temperature to the water temperature
			water = -5;
		};
	};

	class Namalsk: Altis 
	{
		class FireFlies: FireFlies
		{
			enable = 1;
		};

		class Anomalies: Anomalies
		{
			enable = 1;
		};

		class Breathing: Breathing
		{
			enable = 1;
		};

		class Snow: Snow
		{
			enable = 1;
			surfaces[] = {"#nam_snow"};
		};

		class Radiation: Radiation
		{
			enable = 1;
			contaminatedZones[] = 
			{
				{{3960.14,	8454.75,	152.862}, 	80, 	140},	// Object A1
				{{4974.70,	6632.82,	4.74293}, 	40, 	150},	// Object A2
				{{6487.92,	9302.03,	36.0014}, 	60, 	110}	// Sebjan Chemical Factory
			};
		};

		class Temperature: Temperature
		{
			daytimeTemperature[] = {-2.00,-1.77,-1.12,-0.10,1.24,2.78,4.40,6.00,7.46,8.65,9.50,9.90,9.90,9.50,8.65,7.46,6.00,4.40,2.78,1.24,-0.10,-1.12,-1.77,-2.00,-2.00};
		};
	};

	class Tanoa: Altis
	{
		class FireFlies: FireFlies
		{
			enable = 0;
		};

		class Anomalies: Anomalies
		{
			enable = 0;
		};

		class Breathing: Breathing
		{
			enable = 0;
		};

		class Snow: Snow
		{
			enable = 0;
		};

		class Radiation: Radiation
		{
			enable = 1;
		};

		class Temperature: Temperature
		{
			daytimeTemperature[] = {15.93,16.89,18.42,20.40,22.68,25.10,27.48,29.63,31.40,32.66,33.32,33.80,33.80,33.32,32.66,31.40,29.63,27.48,25.10,22.68,20.40,18.42,16.89,15.93,15.93};
		};
	};

	class Malden: Altis
	{
		class FireFlies: FireFlies
		{
			enable = 1;
		};

		class Anomalies: Anomalies
		{
			enable = 0;
		};

		class Breathing: Breathing
		{
			enable = 0;
		};

		class Snow: Snow
		{
			enable = 0;
		};

		class Radiation: Radiation
		{
			enable = 0;
		};

		class Temperature: Temperature
		{
			daytimeTemperature[] = {15.93,16.89,18.42,20.40,22.68,25.10,27.48,29.63,31.40,32.66,33.32,33.80,33.80,33.32,32.66,31.40,29.63,27.48,25.10,22.68,20.40,18.42,16.89,15.93,15.93};
		};
	};
class gm_weferlingen_winter: Altis
	{
		class FireFlies: FireFlies
		{
			enable = 1;
		};

		class Anomalies: Anomalies
		{
			enable = 1;
		};

		class Breathing: Breathing
		{
			enable = 1;
		};

		class Snow: Snow
		{
			enable = 1;
		};

		class Radiation: Radiation
		{
			enable = 1;
		};

		class Temperature: Temperature
		{
			daytimeTemperature[] = {15.93,16.89,18.42,20.40,22.68,25.10,27.48,29.63,31.40,32.66,33.32,33.80,33.80,33.32,32.66,31.40,29.63,27.48,25.10,22.68,20.40,18.42,16.89,15.93,15.93};
		};
	};	

};
class CfgExileHUD
{
	class ShortItemNames
	{
		SmokeShell[] 						= {"WHITE", 	"SMOKE"};
		1Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};
		3Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};

		SmokeShellBlue[] 					= {"BLUE", 		"SMOKE"};
		1Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};
		3Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};

		SmokeShellGreen[] 					= {"GREEN", 	"SMOKE"};
		1Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};
		3Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};

		SmokeShellOrange[] 					= {"ORANGE", 	"SMOKE"};
		1Rnd_SmokeOrange_Grenade_shell[]	= {"ORANGE", 	"SMOKE"};
		3Rnd_SmokeOrange_Grenade_shell[] 	= {"ORANGE", 	"SMOKE"};

		SmokeShellPurple[] 					= {"PURPLE", 	"SMOKE"};
		1Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};
		3Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};

		SmokeShellRed[] 					= {"RED", 		"SMOKE"};
		1Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
		3Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
				
		SmokeShellYellow[] 					= {"YELLOW", 	"SMOKE"};
		1Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
		3Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
				
		UGL_FlareCIR_F[] 					= {"IR", 		"FLARE"};
		3Rnd_UGL_FlareCIR_F[] 				= {"IR", 		"FLARE"};

		UGL_FlareGreen_F[] 					= {"GREEN", 	"FLARE"};
		3Rnd_UGL_FlareGreen_F[] 			= {"GREEN", 	"FLARE"};

		UGL_FlareRed_F[] 					= {"RED", 		"FLARE"};
		3Rnd_UGL_FlareRed_F[] 				= {"RED", 		"FLARE"};

		UGL_FlareWhite_F[] 					= {"WHITE", 	"FLARE"};
		3Rnd_UGL_FlareWhite_F[] 			= {"WHITE", 	"FLARE"};

		UGL_FlareYellow_F[] 				= {"YELLOW", 	"FLARE"};
		3Rnd_UGL_FlareYellow_F[] 			= {"YELLOW", 	"FLARE"};

		Chemlight_blue[] 					= {"BLUE", 		"LIGHT"};
		Chemlight_green[] 					= {"GREEN", 	"LIGHT"};
		Chemlight_red[] 					= {"RED", 		"LIGHT"};
		Chemlight_yellow[] 					= {"YELLOW", 	"LIGHT"};

		1Rnd_HE_Grenade_shell[] 			= {"40MM"};
		3Rnd_HE_Grenade_shell[] 			= {"40MM"};

		O_IR_Grenade[] 						= {"IR"};
		I_IR_Grenade[] 						= {"IR"};
		B_IR_Grenade[] 						= {"IR"};

		HandGrenade[] 						= {"RGO"};
		MiniGrenade[] 						= {"RGN"};

		Exile_Item_ZipTie[]					= {"ZIP", "TIE"};
	};
};
class CfgExileLootSettings
{
	/**
	 * Lifetime of loot in minutes. Synchronize this with
	 * the garbage collector settings of your server
	 * CfgSettings!
	 */
	lifeTime = 8;

	/**
	 * Interval in seconds when the client searches for
	 * new buildings to spawn loot in
	 */
	spawnInterval = 30;

	/**
	 * This is a percentage value to determine how many loot
	 * positions should contain loot when the system spawns loot.
	 *
	 * If a building has 20 positions defined, Exile will 
	 * spawn loot in 10 random positions of them.
	 * 
	 * This means smaller buildings spawn less loot and larger
	 * ones spawn more loot.
	 *
	 * You can also cap it at a maximum value. See below.
	 */
	maximumPositionCoverage = 30;

 	/**
 	 * Limit the number of loot positions per building. If the 
 	 * above percentage value exceeds this value, it will be capped.
 	 *
 	 * Example: Coverage is 50%. Building has 60 loot positions defined.
 	 * This results in 30 loot positions and that is too much. So we
 	 * cap this at 10
 	 */
	maximumNumberOfLootSpotsPerBuilding = 3;

	/**
	 * Exile spawns a random number of items per loot spot. This 
	 * is the upper cap for that. So 3 means it could spawn 1, 2 
	 * or 3.
	 */
	maximumNumberOfItemsPerLootSpot = 2;

	/**
	 * Radius in meter to spawn loot AROUND each player.
	 * Do NOT touch this value if you dont know what you do.
	 * The higher the number, the higher the drop rates, the
	 * easier your server will lag.
	 *
	 * 50m  = Minimum
	 * 200m = Maximum
	 */
	spawnRadius = 60;

	/**
	 * Defines the radius around trader cities where the system should
	 * not spawn loot. Set this to 0 if you want to have loot spawning
	 * in trader citites, ugh.
	 */
	minimumDistanceToTraderZones = 500;

	/**
	 * Defines the radius around territories where no loot spawns.
	 * This does not regard the actual size of a territory. So do not
	 * set this to a lower value than the maximum radius of a territory,
	 * which is 150m by default.
	 */
	minimumDistanceToTerritories = 150;
};
class CfgExileMobileXM8
{
	/**
	 * Add the 4 digit permission code here, so players can authorize
	 * your server to send them messages to their Mobile XM8 app.
	 */
	code = "1234";
};
class CfgExileMusic
{
	Ambient[] = {"ExileTrack03","ExileTrack04"};
	Combat[] = {"ExileTrack06","ExileTrack07"};
	Intro[] = {"ExileTrack02","ExileTrack03"};
};
class CfgExileParty 
{
	showESP = 1;
	allow3DMarkers = 1;
};
class CfgExileRussianRoulette
{
	/*
		Minimum amount to join a session of 
		russian roulette
	*/
	buyInAmount = 100;
};
class CfgFlags 
{
	class USA
	{
		name = "USA";
		texture = "\A3\Data_F\Flags\flag_us_co.paa";
		uids[] = {};
	};
};

class CfgGrinding
{
	// Enables code lock grinding on the server
	enableGrinding = 1;
	
	// Time it takes to grind a fresh lock in minutes
	grindDuration = 25;
	
	// Percentage chance the grinding will fail
	failChance = 25;
	
	// Percentage chance that failing will break your grinder (otherwise it will just remove a battery)
	breakChance = 20;
	
	// Notify the entire server if someone is hacking. 1 == notify, 0 == don't notify
	notifyServer = 1;
	
	// The cooldown time, in minutes, before another server side notification is sent out from a territory. This is on a per territory basis. 
	notificationCooldown = 30;
};
class CfgHacking 
{
	// Enables safe hacking on the server
	enableHacking = 1;
	
	// Time it takes to hack in minutes
	hackDuration = 20;
	
	// Percentage chance the hacking will fail
	failChance = 50;
	
	// Percentage chance the laptop will be removed on fail
	removeChance = 5;
	
	// Max attepts to hack a safe during one restart
	maxHackAttempts = 3;
	
	// Notify the entire server if someone is hacking. 1 == notify, 0 == don't notify
	notifyServer = 1;
	
	// The cooldown time, in minutes, before another server side notification is sent out from a territory. This is on a per territory basis. 
	notificationCooldown = 30;
	
	// The minimal amount of players on the server required in order to hack a safe (set to 0 to disable)
	minPlayers = 1;
	
	// How many safe hacks are allowed to be going at one time
	maxHacks = 5;
	
	// Show a map icon where the hacking is taking place
	showMapIcon = 1;
};

class ExileAbstractAction
{
	title = "";
	condition = "true";
	action = "";
	priority = 1.5;
	showWindow = false;
};

/**
 * Sort this by probability of occurence to speed things up a bit
 */
class CfgInteractionMenus
{
	class Car 
	{
		targetType = 2;
		target = "Car";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !ExilePlayerInSafezone && ((locked ExileClientInteractionObject) != 1)";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};
		};
	};

	class Tank 
	{
		targetType = 2;
		target = "Tank";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !ExilePlayerInSafezone && ((locked ExileClientInteractionObject) != 1)";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};
		};
	};	

	class Air
	{
		target = "Air";
		targetType = 2;

		class Actions
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && ((locked ExileClientInteractionObject) != 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			class RotateLeft: ExileAbstractAction
			{
				title = "Rotate Left";	
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,-15] call ExileClient_object_vehicle_rotate";
			};

			class RotateRight: ExileAbstractAction
			{
				title = "Rotate Right";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,15] call ExileClient_object_vehicle_rotate";
			};
		};
	};

	class Safe
	{
		targetType = 2;
		target = "Exile_Container_Abstract_Safe";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Pack : ExileAbstractAction
			{
				title = "Pack";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_container_pack";
			};

			class SetPinCode : ExileAbstractAction
			{
				title = "Set PIN";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_lock_setPin";
			};
			
			class HackLock: ExileAbstractAction
			{
				title = "Hack Lock";
				condition = "(getNumber(missionConfigFile >> 'CfgHacking' >> 'enableHacking') isEqualTo 1) && ('Exile_Item_Laptop' in (magazines player)) && ((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1) && !ExilePlayerInSafezone";
				action = "['HackLock', _this select 0] call ExileClient_action_execute";
			};
		};
	};

	class Laptop
	{
		targetType = 2;
		target = "Exile_Construction_Laptop_Static";

		class Actions
		{
			class CameraSystem: ExileAbstractAction
			{
				title = "CCTV Access";
				condition = "((ExileClientInteractionObject animationPhase 'LaptopLidRotation') >= 0.5)";
				action = "_this call ExileClient_gui_baseCamera_show";
			};
		};
	};

	class SupplyBox
	{
		targetType = 2;
		target = "Exile_Container_SupplyBox";

		class Actions
		{
			class Mount: ExileAbstractAction
			{
				title = "Mount";
				condition = "(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_mount";
			};

			class Install: ExileAbstractAction
			{
				title = "Install";
				condition = "isNull (attachedTo ExileClientInteractionObject) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_install";
			};

			class Unmount: ExileAbstractAction
			{
				title = "Unmount";
				condition = "!(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_unmount";
			};
		};
	};
	
	class Drawbridge
	{
		targetType = 2;
		target = "Exile_Construction_Abstract_DrawBridge";

		class Actions
		{
			class Lower: ExileAbstractAction
			{
				title = "Lower";
				condition = "ExileClientInteractionObject call ExileClient_object_construction_openBridgeShow";
				action = "ExileClientInteractionObject animateSource ['DrawBridge_Source', 0];";
			};
			
			class Raise: ExileAbstractAction
			{
				title = "Raise";
				condition = "((ExileClientInteractionObject animationSourcePhase 'DrawBridge_Source') < 0.5)";
				action = "ExileClientInteractionObject animateSource ['DrawBridge_Source', 2]";
			};
		};
	};

	class Construction
	{
		targetType = 2;
		target = "Exile_Construction_Abstract_Static";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_lock_scan";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Picks up the construction so you can move it
			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_construction_move";
			};

			// Removes the construction.
			class Deconstruct: ExileAbstractAction
			{
				title = "Remove";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_construction_deconstruct";
			};

			class AddALock : ExileAbstractAction
			{
				title = "Add a Lock";
				condition = "call ExileClient_object_construction_lockAddShow";
				action = "_this spawn ExileClient_object_construction_lockAdd";
			};

			class Upgrade : ExileAbstractAction
			{
				title = "Upgrade";
				condition = "call ExileClient_object_construction_upgradeShow";
				action = "_this call ExileClient_object_construction_upgrade";
			};

			class MakeBoom : ExileAbstractAction
			{
				title = "Plant charge";
				condition = "call ExileClient_system_breaching_condition";
				action = "_this call ExileClient_system_breaching_action";
			};

			class Repair : ExileAbstractAction
			{
				title = "Repair";
				condition = "(!((ExileClientInteractionObject getVariable ['ExileConstructionDamage',0]) isEqualTo 0)) && (call ExileClient_util_world_isInOwnTerritory)";
				action = "_this call ExileClient_object_construction_repair";
			};

			class GrindLock : ExileAbstractAction
			{
				title = "Grind Lock";
				condition = "(getNumber(missionConfigFile >> 'CfgGrinding' >> 'enableGrinding') isEqualTo 1) && ('Exile_Item_Grinder' in (magazines player)) && ('Exile_Magazine_Battery' in (magazines player)) && ((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1) && ((ExileClientInteractionObject animationPhase 'DoorRotation') < 0.5)";
				action = "['GrindLock', _this select 0] call ExileClient_action_execute";
			};
		};
	};

		class EBM_Metalwall_window
	{
		targetType = 2;
		target = "EBM_Metalwall_window";
		
		class Actions 
		{
			class SetPinCode : ExileAbstractAction
			{
				title = "Set PIN";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_lock_setPin";
			};
			
			class AddALock : ExileAbstractAction
			{
				title = "Add a Lock";
				condition = "call ExileClient_object_construction_lockAddShow";
				action = "_this spawn ExileClient_object_construction_lockAdd";
			};
		};
	};

	class EBM_Metalwall_floorport_door
	{
		targetType = 2;
		target = "EBM_Metalwall_floorport_door";
		
		class Actions 
		{
			class SetPinCode : ExileAbstractAction
			{
				title = "Set PIN";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_lock_setPin";
			};
			
			class AddALock : ExileAbstractAction
			{
				title = "Add a Lock";
				condition = "call ExileClient_object_construction_lockAddShow";
				action = "_this spawn ExileClient_object_construction_lockAdd";
			};
		};
	};
	
	class EBM_Metalwall_Door
	{
		targetType = 2;
		target = "EBM_Metalwall_Door";
		
		class Actions 
		{
			class SetPinCode : ExileAbstractAction
			{
				title = "Set PIN";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_lock_setPin";
			};
			
			class AddALock : ExileAbstractAction
			{
				title = "Add a Lock";
				condition = "call ExileClient_object_construction_lockAddShow";
				action = "_this spawn ExileClient_object_construction_lockAdd";
			};
		};
	};

	class EBM_Brickwall_window
	{
		targetType = 2;
		target = "EBM_Brickwall_window";
		
		class Actions 
		{
			class SetPinCode : ExileAbstractAction
			{
				title = "Set PIN";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_lock_setPin";
			};
			
			class AddALock : ExileAbstractAction
			{
				title = "Add a Lock";
				condition = "call ExileClient_object_construction_lockAddShow";
				action = "_this spawn ExileClient_object_construction_lockAdd";
			};
		};
	};

	class EBM_Brickwall_floorport_door
	{
		targetType = 2;
		target = "EBM_Brickwall_floorport_door";
		
		class Actions 
		{
			class SetPinCode : ExileAbstractAction
			{
				title = "Set PIN";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_lock_setPin";
			};
			
			class AddALock : ExileAbstractAction
			{
				title = "Add a Lock";
				condition = "call ExileClient_object_construction_lockAddShow";
				action = "_this spawn ExileClient_object_construction_lockAdd";
			};
		};
	};
	
	class EBM_Brickwall_door
	{
		targetType = 2;
		target = "EBM_Brickwall_Door";
		
		class Actions 
		{
			class SetPinCode : ExileAbstractAction
			{
				title = "Set PIN";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_lock_setPin";
			};
			
			class AddALock : ExileAbstractAction
			{
				title = "Add a Lock";
				condition = "call ExileClient_object_construction_lockAddShow";
				action = "_this spawn ExileClient_object_construction_lockAdd";
			};
		};
	};
	
	class DomeBig
	{
		targetType = 2;
		target = "Land_Dome_Big_F";
		
		class Actions 
		{
			// Locks a vehicle
			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class SetPinCode : ExileAbstractAction
			{
				title = "Set PIN";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_lock_setPin";
			};
			
			class AddALock : ExileAbstractAction
			{
				title = "Add a Lock";
				condition = "call ExileClient_object_construction_lockAddShow";
				action = "_this spawn ExileClient_object_construction_lockAdd";
			};
		};
	};
	
	class CargoSmall
	{
		targetType = 2;
		target = "Land_CargoBox_V1_F";
		
		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};
			// Locks a vehicle
			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class SetPinCode : ExileAbstractAction
			{
				title = "Set PIN";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_lock_setPin";
			};
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};
		};
	};
	
	class Cargo20Military
	{
		targetType = 2;
		target = "Land_Cargo20_military_green_F";
		
		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};
			// Locks a vehicle
			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class SetPinCode : ExileAbstractAction
			{
				title = "Set PIN";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_lock_setPin";
			};
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};
		};
	};
	class Cargo40
	{
		targetType = 2;
		target = "Land_Cargo40_light_green_F";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};
			// Locks a vehicle
			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};
			
			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class SetPinCode : ExileAbstractAction
			{
				title = "Set PIN";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_lock_setPin";
			};
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};
		};
	};
	class Cargo20
	{
		targetType = 2;
		target = "Land_Cargo20_sand_F";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};
			// Locks a vehicle
			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class SetPinCode : ExileAbstractAction
			{
				title = "Set PIN";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_lock_setPin";
			};
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};
		};
	};
	
	class Bunker
	{
		targetType = 2;
		target = "Land_Bunker_F";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};
			// Locks a vehicle
			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class SetPinCode : ExileAbstractAction
			{
				title = "Set PIN";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_lock_setPin";
			};
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};
		};
	};




	/*
		Tent, Storage crate etc.
	*/
	class Container
	{
		targetType = 2;
		target = "Exile_Container_Abstract";

		class Actions 
		{
			class Pack 
			{
				title = "Pack";
				condition = "!((typeOf ExileClientInteractionObject) isEqualTo 'Exile_Container_SupplyBox')";
				action = "_this spawn ExileClient_object_container_pack";
			};
			// Picks up the container so you can move it
			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "(getNumber(configFile >> 'CfgVehicles' >> typeOf ExileClientInteractionObject >> 'exileIsLockable') isEqualTo 0) || ((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_construction_move";
			};
		};
	};
	
	class Flag
	{
		targetType = 2;
		target = "Exile_Construction_Flag_Static";

		class Actions
		{
			/*
			class Manage : ExileAbstractAction
			{
				title = "Manage";
				condition = "true";
				action = "_this call ExileClient_gui_baseManagement_event_show";
			};
			*/
			class StealFlag: ExileAbstractAction
			{
				title = "Steal Flag";
				condition = "((ExileClientInteractionObject getvariable ['ExileFlagStolen',1]) isEqualTo 0)";
				action = "['StealFlag', _this select 0] call ExileClient_action_execute";
			};
			
			class RestoreFlag: ExileAbstractAction
			{
				title = "Restore Flag";
				condition = "((ExileClientInteractionObject getvariable ['ExileFlagStolen',0]) isEqualTo 1)";
				action = "['restoreFlagRequest', [netID ExileClientInteractionObject]] call ExileClient_system_network_send";
			};
		};
	};

	class Boat 
	{
		targetType = 2;
		target = "Ship";

		class Actions
		{
			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			// Pushes a boat into look direction to move into water
			class Push: ExileAbstractAction
			{
				title = "Fus Ro Dah!";
				condition = "((crew ExileClientInteractionObject) isEqualTo [])";
				action = "_this call ExileClient_object_vehicle_push";
			};
		};
	};

	class Bikes
	{
		targetType = 2;
		target = "Bicycle";

		class Actions
		{
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "true";
				action = "_this call ExileClient_object_vehicle_flip";
			};
		};
	};

	class Player 
	{
		targetType = 2;
		target = "Exile_Unit_Player";

		class Actions 
		{
			class Free: ExileAbstractAction
			{
				title = "Free";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_free";
			};
			
			class Search: ExileAbstractAction
			{
				title = "Search Gear";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_searchGear";
			};

			class Identify: ExileAbstractAction
			{
				title = "Identify Body";
				condition = "!(alive ExileClientInteractionObject)";
				action = "_this call ExileClient_object_player_identifyBody";
			};
			
			class HideCorpse: ExileAbstractAction
			{
				title = "Hide Body";
				condition = "!(alive ExileClientInteractionObject) && ('Exile_Melee_Shovel' isEqualTo (currentWeapon player))";
				action = "['HideBody', (_this select 0)] call ExileClient_action_execute";
			};
		};
	};
	
	class Animal
	{
		targetType = 2;
		target = "Exile_Animal_Abstract";

		class Actions 
		{			
			class Gut: ExileAbstractAction
			{
				title = "Gut Animal";
				condition = "!(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['CanBeGutted', false])";
				action = "['GutAnimal', ExileClientInteractionObject] call ExileClient_action_execute";
			};
		};
	};
};
/**
 * Classname is used for reference
 * name is displayed in crafting requirements
 * models is used for crafting and interaction menus
 */
class CfgInteractionModels
{
	class WaterSource
	{
		name = "Water tanks, barrels, coolers or pumps";
		models[] = 	
		{
			"barrelwater_f", 
			"barrelwater_grey_f",
			"waterbarrel_f",
			"watertank_f",
			"stallwater_f",
			"waterpump_01_f",
			"water_source_f",

			// Namalsk
			"wellpump",
			"Land_jhad_stand_water",
			"Land_Jbad_Misc_Well_L",
			"Land_jbad_Fridge",
			"Land_jbad_reservoir",
			"Land_jbad_teapot",
			"Land_KBud",
			
			//Tanoa
			"watertank_01_f",
			"watertank_02_f",
			"watertank_03_f",
			"watertank_04_f"
		};
	};

	class CleanWaterSource
	{
		name = "Water cooler";
		models[] = 	
		{
			"watercooler"
		};
	};

	class WorkBench
	{
		name = "Work Bench";
		models[] = 
		{
			"workstand_f.p3d"
		};
	};

	class ShippingContainerSource
	{
		name = "Shipping Containers";
		models[] = 
		{
			// Arma 3
			"CargoBox_V1_F",
			"Cargo20_blue_F",
			"Cargo20_brick_red_F",
			"Cargo20_cyan_F",
			"Cargo20_grey_F",
			"Cargo20_light_blue_F",
			"Cargo20_light_green_F",
			"Cargo20_military_green_F",
			"Cargo20_military_ruins_F",
			"Cargo20_orange_F",
			"Cargo20_red_F",
			"Cargo20_sand_F",
			"Cargo20_white_F",
			"Cargo20_yellow_F",
			"Cargo40_blue_F",
			"Cargo40_brick_red_F",
			"Cargo40_cyan_F",
			"Cargo40_grey_F",
			"Cargo40_light_blue_F",
			"Cargo40_light_green_F",
			"Cargo40_military_green_F",
			"Cargo40_orange_F",
			"Cargo40_red_F",
			"Cargo40_sand_F",
			"Cargo40_white_F",
			"Cargo40_yellow_F",

			// Namalsk
			"nam_container.p3d",
			"misc_cargo1d.p3d",
			"misc_cargo1b.p3d",
			"misc_cargo1bo.p3d",
			"misc_cargo2c.p3d",
			"misc_cargo1ao.p3d",
			
			//Tanoa
			"Land_ContainerLine_01_F",
			"Land_ContainerLine_02_F",
			"Land_ContainerLine_03_F",

			// Also allow wrecks
			"wreck_"
/*			
			"wreck_bmp2_f.p3d",
			"wreck_brdm2_f.p3d",
			"wreck_car2_f.p3d",
			"wreck_car3_f.p3d",
			"wreck_car_f.p3d",
			"wreck_cardismantled_f.p3d",
			"wreck_hmmwv_f.p3d",
			"wreck_hunter_f.p3d",
			"wreck_offroad2_f.p3d",
			"wreck_offroad_f.p3d",
			"wreck_skodovka_f.p3d",
			"wreck_slammer_f.p3d",
			"wreck_slammer_hull_f.p3d",
			"wreck_slammer_turret_f.p3d",
			"wreck_t72_hull_f.p3d",
			"wreck_t72_turret_f.p3d",
			"wreck_truck_dropside_f.p3d",
			"wreck_truck_f.p3d",
			"wreck_uaz_f.p3d",
			"wreck_ural_f.p3d"
			"wreck_van_f.p3d",
			*/


			// TODO: Ask community for CUP/AiA model names	
		};
	};

	class WoodSource
	{
		name = "Trees";
		models[] = 
		{
			" t_",
			" bo_t_",

			// A2 trees
            " str_",
            " Smrk_",
            " les_",
            " brg_"			
		};
	};

	// TODO: Add https://community.bistudio.com/wikidata/images/thumb/6/60/Arma3_CfgVehicles_Land_Tank_rust_F.jpg/150px-Arma3_CfgVehicles_Land_Tank_rust_F.jpg
	class FuelSource
	{
		name = "Fuel pumps, stations or barrels";
		models[] = 
		{
			"fuelstation_feed_f.p3d",
			"metalbarrel_f.p3d",
			"flexibletank_01_f.p3d",
			"fs_feed_f.p3d",
			//Tanoa
			"fuelstation_01_pump_f.p3d",
			"fuelstation_02_pump_f.p3d"
		};	
	};
};
class CfgLocker 
{
	numbersOnly = "0123456789";
	
	maxDeposit = 3000000;
};

class CfgPlayer 
{
	// In minutes ammount of time it takes to go from 100 - 0 if stationary
	hungerDecay = 90;
	thirstDecay = 60;

	// Damage taken from 0 (health||thirst)/sec
	healthDecay = 5.0;

	// Health regen if over BOTH
	thirstRegen = 120;
	hungerRegen = 120;

	// IF above meet recover HP%/MIN
	recoveryPerMinute = 2;

	// Set custom aim precision coefficient for weapon sway
	// https://community.bistudio.com/wiki/Arma_3_Stamina
	// Set to -1 if you want to use Arma 3 default value
	// setCustomAimCoef
	customAimCoefficient = 0.2;

	// 0 or 1
	enableFatigue = 0;
	enableStamina = 0;

	disableMapDrawing = 0;
	
	// Use the current gradient to affect the players movement when autorunning.
	// 0 == default exile auto run
	useGradientAffectedAutoRun = 0;
};
/*
	This config will allow you to override the default poptab storage for vehicles and containers. 
	The current system takes the maxLoad of a vehicle * 10, and that gives you the max poptabs that can be stored.
	This will allow you to override that max with your own value.
	
	To override, just add the vehicle/containers classname to this class, and define its max. Look at Exile_Container_Safe_Small as an example.
*/
class CfgPoptabStorage
{
	class Exile_Container_Safe_Small { max = 250000; };	
};
class CfgSimulation
{
	/*
		Use Arma built in Dynamic Simulation. 
		If you have any issues with players unable to get into cars, control vehicles, fly planes, etc. try turning this off
		Options:
			0: Use Exile's built in simulation system (Same system in 1.0.3 and below)
			1: Use Dynamic Simulation
	*/
	enableDynamicSimulation = 1;
	
	/*
		Simulation distance settings
		For more information:
			https://community.bistudio.com/wiki/setDynamicSimulationDistance
			https://community.bistudio.com/wiki/setDynamicSimulationDistanceCoef
	*/
	
	// The distance, in meters, will infantry units be simulated. Default: 500m
	groupSimulationDistance = 500;
	
	// The distance, in meters, will vehicles with crew be simulated. Default: 350m
	vehicleSimulationDistance = 250;
	
	// The distance, in meters, will all vehicles without crew be simulated. Default: 250m
	emptyVehicleSimulationDistance = 250;
	
	// The distance, in meters, will static objects be simulated. This includes anything from a small tin can to a building. Default: 50m
	propSimulationDistance = 50;
	
	// Multiplies the entity activation distance by set value if the entity is moving. Default: 2
	isMovingSimulationCoef = 2;
};




class CfgSlothMachine
{
	spinCost = 100;
	Jackpot = 10100;
	
	chances[] = 
	{
		{85, ""}, 					// 85% = Nothing
		{95, "Level1"}, 			// 10% = 1pt
		{96, "Level2"}, 			// 1% = 10pt
		{97, "Level3"}, 			// 1% = 25pt
		{98, "Level4"}, 			// 1% = 50pt
		{99, "Level5"},				// 1% = 100pt
		{100, "Jackpot"} 			// 1% = Jackpot
	};

	class Prizes 
	{
		class Level1
		{
			symbol = "\exile_assets\texture\item\Exile_Item_ToiletPaper.paa";
			prize = 101;
		};

		class Level2
		{
			symbol = "\exile_assets\texture\item\Exile_Item_CockONut.paa";
			prize = 110;
		};

		class Level3
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Beer.paa";
			prize = 125;
		};

		class Level4
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Knife.paa";
			prize = 150;
		};

		class Level5
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Safe.paa";
			prize = 200;
		};
		
		class Jackpot
		{
			symbol = "\exile_assets\texture\item\Exile_Item_XmasPresent.paa";
		};
	};
};
class CfgTerritories
{
	// Base Cost / Radius
	// Level 1 is allways for Pop Tabs, >= 2 for Respect
	prices[] = 
	{
		// Purchase Price 		Radius 		Number of Objects
		{5000,					15,			30 					}, // Level 1
		{10000,					30,			60 					}, // Level 2 
		{15000,					45,			90 					}, // Level 3
		{20000,					60,			120					}, // Level 4
		{25000,					75,			150					}, // Level 5
		{30000,					90,			180					}, // Level 6
		{35000,					105,		210					}, // Level 7
		{40000,					120,		240					}, // Level 8
		{45000,					135,		270					}, // Level 9
		{50000,					150,		300					}  // Level 10
	};

	// A shortcut of the above maximum radius
	maximumRadius = 150;

	// The above * 2 plus coverving the 20m you can move while placing things
	minimumDistanceToOtherTerritories = 325; 

	// Maximum number of territories a player can own
	maximumNumberOfTerritoriesPerPlayer = 2;

	/**
	 * Defines the minimum distance to safe zones / trader cities where players
	 * cannot build territories
	 */
	minimumDistanceToTraderZones = 1000;

	/**
	 * Defines the minimum distance to spawn zones where players
	 * cannot build territories
	 */
	minimumDistanceToSpawnZones = 1000;

	// Amount of pop tabs per object to pay
	popTabAmountPerObject = 10;

	// Amount of minutes building is disabled after a charge has been planted
	// in a territory. This basically prevents people from placing tons of walls
	// or removing walls while their territory is under attack.
	constructionBlockDuration = 5;
};
class CfgTraderCategories
{
	class Community
	{
		name = "Community Items";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community2
	{
		name = "Community Items 2";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community3
	{
		name = "Community Items 3";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community4
	{
		name = "Community Items 4";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community5
	{
		name = "Community Items 5";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community6
	{
		name = "Community Items 6";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community7
	{
		name = "Community Items 7";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community8
	{
		name = "Community Items 8";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community9
	{
		name = "Community Items 9";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community10
	{
		name = "Community Items 10";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Uniforms
	{
		name = "Uniforms";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
		/*	"U_C_Journalist",
			"U_C_Poloshirt_blue",
			"U_C_Poloshirt_burgundy",
			"U_C_Poloshirt_salmon",
			"U_C_Poloshirt_stripped",
			"U_C_Poloshirt_tricolour",
			"U_C_Poor_1",
			"U_C_Poor_2",
			"U_C_Poor_shorts_1",
			"U_C_Scientist",
			"U_OrestesBody",
			"U_Rangemaster",
			"U_NikosAgedBody",
			"U_NikosBody",
			"U_Competitor",
			"U_B_CombatUniform_mcam",
			"U_B_CombatUniform_mcam_tshirt",
			"U_B_CombatUniform_mcam_vest",
			"U_B_CombatUniform_mcam_worn",
			"U_B_CTRG_1",
			"U_B_CTRG_2",
			"U_B_CTRG_3",
			"U_I_CombatUniform",
			"U_I_CombatUniform_shortsleeve",
			"U_I_CombatUniform_tshirt",
			"U_I_OfficerUniform",
			"U_O_CombatUniform_ocamo",
			"U_O_CombatUniform_oucamo",
			"U_O_OfficerUniform_ocamo",
			"U_B_SpecopsUniform_sgg",
			"U_O_SpecopsUniform_blk",
			"U_O_SpecopsUniform_ocamo",
			"U_I_G_Story_Protagonist_F",
			"Exile_Uniform_Woodland",
			"U_C_HunterBody_grn",
			"U_IG_Guerilla1_1",
			"U_IG_Guerilla2_1",
			"U_IG_Guerilla2_2",
			"U_IG_Guerilla2_3",
			"U_IG_Guerilla3_1",
			"U_BG_Guerilla2_1",
			"U_IG_Guerilla3_2",
			"U_BG_Guerrilla_6_1",
			"U_BG_Guerilla1_1",
			"U_BG_Guerilla2_2",
			"U_BG_Guerilla2_3",
			"U_BG_Guerilla3_1",
			"U_BG_leader",
			"U_IG_leader",
			"U_I_G_resistanceLeader_F",
			"U_B_FullGhillie_ard",
			"U_B_FullGhillie_lsh",
			"U_B_FullGhillie_sard",
			"U_B_GhillieSuit",
			"U_I_FullGhillie_ard",
			"U_I_FullGhillie_lsh",
			"U_I_FullGhillie_sard",
			"U_I_GhillieSuit",
			"U_O_FullGhillie_ard",
			"U_O_FullGhillie_lsh",
			"U_O_FullGhillie_sard",
			"U_O_GhillieSuit",
			"U_I_Wetsuit",
			"U_O_Wetsuit",
			"U_B_Wetsuit",
			"U_B_survival_uniform",
			"U_B_HeliPilotCoveralls",
			"U_I_HeliPilotCoveralls",
			"U_B_PilotCoveralls",
			"U_I_pilotCoveralls",
			"U_O_PilotCoveralls",
			//Apex
			"U_B_T_Soldier_F",
			"U_B_T_Soldier_AR_F",
			"U_B_T_Soldier_SL_F",
			//"U_B_T_Sniper_F",
			//"U_B_T_FullGhillie_tna_F",
			"U_B_CTRG_Soldier_F",
			"U_B_CTRG_Soldier_2_F",
			"U_B_CTRG_Soldier_3_F",
			"U_B_GEN_Soldier_F",
			"U_B_GEN_Commander_F",
			"U_O_T_Soldier_F",
			"U_O_T_Officer_F",
			//"U_O_T_Sniper_F",
			//"U_O_T_FullGhillie_tna_F",
			"U_O_V_Soldier_Viper_F",
			"U_O_V_Soldier_Viper_hex_F",
			"U_I_C_Soldier_Para_1_F",
			"U_I_C_Soldier_Para_2_F",
			"U_I_C_Soldier_Para_3_F",
			"U_I_C_Soldier_Para_4_F",
			"U_I_C_Soldier_Para_5_F",
			"U_I_C_Soldier_Bandit_1_F",
			"U_I_C_Soldier_Bandit_2_F",
			"U_I_C_Soldier_Bandit_3_F",
			"U_I_C_Soldier_Bandit_4_F",
			"U_I_C_Soldier_Bandit_5_F",
			"U_I_C_Soldier_Camo_F",
			"U_C_man_sport_1_F",
			"U_C_man_sport_2_F",
			"U_C_man_sport_3_F",
			"U_C_Man_casual_1_F",
			"U_C_Man_casual_2_F",
			"U_C_Man_casual_3_F",
			"U_C_Man_casual_4_F",
			"U_C_Man_casual_5_F",
			"U_C_Man_casual_6_F",
			"U_B_CTRG_Soldier_urb_1_F",
			"U_B_CTRG_Soldier_urb_2_F",
			"U_B_CTRG_Soldier_urb_3_F"*/
			"gm_uniform_helper_person",
			"gm_gc_army_uniform_soldier_80_str",
			"gm_gc_army_uniform_soldier_gloves_80_str",
			"gm_gc_army_uniform_soldier_80_blk",
			"gm_gc_army_uniform_soldier_80_win",
			"gm_gc_pol_uniform_dress_80_blu",
			"gm_gc_army_uniform_dress_80_gry",
			"gm_gc_airforce_uniform_pilot_80_blu",
			"gm_ge_army_uniform_crew_80_oli",
			"gm_ge_army_uniform_crew_90_flk",
			"gm_ge_army_uniform_crew_90_trp",
			"gm_ge_army_uniform_pilot_oli",
			"gm_ge_pol_uniform_pilot_grn",
			"gm_ge_army_uniform_pilot_sar",
			"gm_ge_army_uniform_pilot_rolled_oli",
			"gm_ge_pol_uniform_pilot_rolled_grn",
			"gm_ge_army_uniform_pilot_rolled_sar",
			"gm_ge_army_uniform_soldier_80_oli",
			"gm_ge_army_uniform_soldier_80_ols",
			"gm_ge_army_uniform_soldier_gloves_80_ols",
			"gm_ge_army_uniform_soldier_parka_80_oli",
			"gm_ge_army_uniform_soldier_parka_80_ols",
			"gm_ge_army_uniform_soldier_parka_80_win",
			"gm_ge_pol_uniform_suit_80_grn",
			"gm_ge_dbp_uniform_suit_80_blu",
			"gm_ge_pol_uniform_blouse_80_blk",
			"gm_ge_civ_uniform_blouse_80_gry",
			"gm_ge_bgs_uniform_soldier_80_smp",
			"gm_ge_bgs_uniform_special_80_blk",
			"gm_ge_bgs_uniform_special_80_grn",
			"gm_ge_bgs_uniform_special_rolled_80_blk",
			"gm_ge_bgs_uniform_special_rolled_80_grn",
			"gm_ge_ff_uniform_man_80_orn",
			"gm_ge_army_uniform_soldier_bdu_80_wdl",
			"gm_ge_army_uniform_soldier_bdu_rolled_80_wdl",
			"gm_xx_uniform_soldier_bdu_80_wdl",
			"gm_xx_uniform_soldier_bdu_nogloves_80_wdl",
			"gm_xx_uniform_soldier_bdu_rolled_80_wdl",
			"gm_xx_uniform_soldier_bdu_80_oli",
			"gm_xx_uniform_soldier_bdu_nogloves_80_oli",
			"gm_xx_uniform_soldier_bdu_rolled_80_oli",
			"gm_ge_uniform_soldier_tshirt_90_flk",
			"gm_ge_uniform_soldier_tshirt_90_trp",
			"gm_ge_uniform_soldier_tshirt_90_oli",
			"gm_ge_uniform_soldier_90_flk",
			"gm_ge_uniform_soldier_90_trp",
			"gm_ge_uniform_soldier_rolled_90_flk",
			"gm_ge_uniform_soldier_rolled_90_trp",
			"gm_ge_uniform_pilot_commando_oli",
			"gm_ge_uniform_pilot_commando_blk",
			"gm_ge_uniform_pilot_commando_gry",
			"gm_ge_uniform_pilot_commando_rolled_oli",
			"gm_ge_uniform_pilot_commando_rolled_blk",
			"gm_ge_uniform_pilot_commando_rolled_gry",
			"gm_pl_army_uniform_soldier_80_moro",
			"gm_pl_army_uniform_soldier_rolled_80_moro",
			"gm_pl_army_uniform_soldier_autumn_80_moro",
			"gm_pl_army_uniform_soldier_80_frog",
			"gm_pl_army_uniform_soldier_rolled_80_frog",
			"gm_pl_army_uniform_soldier_80_win",
			"gm_pl_airforce_uniform_pilot_80_gry",
			"gm_gc_civ_uniform_man_01_80_blk",
			"gm_gc_civ_uniform_man_01_80_blu",
			"gm_gc_civ_uniform_man_02_80_brn",
			"gm_gc_civ_uniform_man_03_80_grn",
			"gm_gc_civ_uniform_man_03_80_blu",
			"gm_gc_civ_uniform_man_03_80_gry",
			"gm_gc_civ_uniform_man_04_80_blu",
			"gm_gc_civ_uniform_man_04_80_gry",
			"gm_gc_civ_uniform_pilot_80_blk",
			"gm_dk_army_uniform_soldier_84_m84",
			"gm_dk_army_uniform_soldier_84_win",
			"gm_dk_army_uniform_soldier_84_oli",
			"gm_xx_army_uniform_fighter_01_m84",
			"gm_xx_army_uniform_fighter_01_oli",
			"gm_xx_army_uniform_fighter_01_alp",
			"gm_xx_army_uniform_fighter_02_wdl",
			"gm_xx_army_uniform_fighter_02_oli",
			"gm_xx_army_uniform_fighter_03_blk",
			"gm_xx_army_uniform_fighter_03_brn",
			"gm_xx_army_uniform_fighter_04_wdl",
			"gm_xx_army_uniform_fighter_04_grn"
		};
	};

	class Vests
	{
		name = "Vests";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\vest_ca.paa";
		items[] =
		{
			/*"V_Press_F",
			"V_Rangemaster_belt",
			"V_TacVest_blk",
			"V_TacVest_blk_POLICE",
			"V_TacVest_brn",
			"V_TacVest_camo",
			"V_TacVest_khk",
			"V_TacVest_oli",
			"V_TacVestCamo_khk",
			"V_TacVestIR_blk",
			"V_I_G_resistanceLeader_F",
			"V_BandollierB_blk",
			"V_BandollierB_cbr",
			"V_BandollierB_khk",
			"V_BandollierB_oli",
			"V_BandollierB_rgr",
			"V_Chestrig_blk",
			"V_Chestrig_khk",
			"V_Chestrig_oli",
			"V_Chestrig_rgr",
			"V_HarnessO_brn",
			"V_HarnessO_gry",
			"V_HarnessOGL_brn",
			"V_HarnessOGL_gry",
			"V_HarnessOSpec_brn",
			"V_HarnessOSpec_gry",
			"V_PlateCarrier1_blk",
			"V_PlateCarrier1_rgr",
			"V_PlateCarrier2_rgr",
			"V_PlateCarrier3_rgr",
			"V_PlateCarrierGL_blk",
			"V_PlateCarrierGL_mtp",
			"V_PlateCarrierGL_rgr",
			"V_PlateCarrierH_CTRG",
			"V_PlateCarrierIA1_dgtl",
			"V_PlateCarrierIA2_dgtl",
			"V_PlateCarrierIAGL_dgtl",
			"V_PlateCarrierIAGL_oli",
			"V_PlateCarrierL_CTRG",
			"V_PlateCarrierSpec_blk",
			"V_PlateCarrierSpec_mtp",
			"V_PlateCarrierSpec_rgr",
			//Apex
			"V_TacChestrig_grn_F",
			"V_TacChestrig_oli_F",
			"V_TacChestrig_cbr_F",
			"V_PlateCarrier1_tna_F",
			"V_PlateCarrier2_tna_F",
			"V_PlateCarrierSpec_tna_F",
			"V_PlateCarrierGL_tna_F",
			"V_HarnessO_ghex_F",
			"V_HarnessOGL_ghex_F",
			"V_BandollierB_ghex_F",
			"V_TacVest_gen_F",
			"V_PlateCarrier1_rgr_noflag_F",
			"V_PlateCarrier2_rgr_noflag_F",
			// Jets
			"V_DeckCrew_yellow_F",
			"V_DeckCrew_blue_F",
			"V_DeckCrew_green_F",
			"V_DeckCrew_red_F",
			"V_DeckCrew_white_F",
			"V_DeckCrew_brown_F",
			"V_DeckCrew_violet_F"*/
			"Exile_Vest_Snow", //chaddles edit
			"gm_gc_army_vest_80_belt_str",
			"gm_gc_army_vest_80_rifleman_str",
			"gm_gc_army_vest_80_leader_str",
			"gm_gc_bgs_vest_80_border_str",
			"gm_gc_army_vest_80_lmg_str",
			"gm_gc_army_vest_80_at_str",
			"gm_gc_vest_combatvest3_str",
			"gm_gc_vest_combatvest3_pol",
			"gm_ge_army_vest_80_belt",
			"gm_ge_army_vest_80_rifleman",
			"gm_ge_army_vest_80_rifleman_smg",
			"gm_ge_bgs_vest_80_rifleman",
			"gm_ge_army_vest_80_leader",
			"gm_ge_army_vest_80_leader_smg",
			"gm_ge_army_vest_80_bag",
			"gm_ge_army_vest_80_crew",
			"gm_ge_army_vest_80_demolition",
			"gm_ge_army_vest_80_machinegunner",
			"gm_ge_army_vest_80_medic",
			"gm_ge_army_vest_80_officer",
			"gm_ge_army_vest_80_mp_wht",
			"gm_ge_pol_vest_80_wht",
			"gm_ge_army_vest_80_brassard_mp",
			"gm_ge_vest_safety",
			"gm_ge_vest_satchel_80_blk",
			"gm_ge_vest_satchel_80_san",
			"gm_ge_vest_armor_90_flk",
			"gm_ge_vest_armor_90_crew_flk",
			"gm_ge_vest_armor_90_leader_flk",
			"gm_ge_vest_armor_90_machinegunner_flk",
			"gm_ge_vest_armor_90_officer_flk",
			"gm_ge_vest_armor_90_rifleman_flk",
			"gm_ge_vest_armor_90_demolition_flk",
			"gm_ge_vest_armor_90_medic_flk",
			"gm_ge_vest_90_crew_flk",
			"gm_ge_vest_90_demolition_flk",
			"gm_ge_vest_90_leader_flk",
			"gm_ge_vest_90_machinegunner_flk",
			"gm_ge_vest_90_medic_flk",
			"gm_ge_vest_90_officer_flk",
			"gm_ge_vest_90_rifleman_flk",
			"gm_ge_army_vest_pilot_oli",
			"gm_ge_army_vest_pilot_pads_oli",
			"gm_ge_army_vest_type18_dpm",
			"gm_ge_bgs_vest_type18_blk",
			"gm_ge_bgs_vest_type18_grn",
			"gm_ge_bgs_vest_type3_gry",
			"gm_ge_bgs_vest_type3_oli",
			"gm_ge_bgs_vest_type3_blu",
			"gm_ge_bgs_vest_type3a1_gry",
			"gm_ge_bgs_vest_type3a1_oli",
			"gm_ge_vest_sov_80_blk",
			"gm_ge_vest_sov_80_oli",
			"gm_ge_vest_sov_80_wdl",
			"gm_ge_vest_sov_armor_80_blk",
			"gm_ge_vest_sov_armor_80_oli",
			"gm_ge_vest_sov_armor_80_wdl",
			"gm_pl_army_vest_80_rig_gry",
			"gm_pl_army_vest_80_rifleman_gry",
			"gm_pl_army_vest_80_leader_gry",
			"gm_pl_army_vest_80_marksman_gry",
			"gm_pl_army_vest_80_mg_gry",
			"gm_pl_army_vest_80_at_gry",
			"gm_pl_army_vest_80_crew_gry",
			"gm_pl_army_vest_80_rifleman_smg_gry",
			"gm_dk_army_vest_54_rifleman",
			"gm_dk_army_vest_54_crew",
			"gm_dk_army_vest_54_machinegunner",
			"gm_dk_army_vest_m00_m84",
			"gm_dk_army_vest_m00_m84_rifleman",
			"gm_dk_army_vest_m00_m84_machinegunner",
			"gm_dk_army_vest_m00_win",
			"gm_dk_army_vest_m00_win_rifleman",
			"gm_dk_army_vest_m00_win_machinegunner",
			"gm_dk_army_vest_m00_blu",
			"gm_dk_army_vest_m00_wdl",
			"gm_dk_army_vest_m00_wdl_rifleman"

		};
	};

	class Headgear
	{
		name = "Headgear";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\headgear_ca.paa";
		items[] =
		{
			"Exile_Headgear_SantaHat",
			"Exile_Headgear_SafetyHelmet",
			"gm_xx_headgear_headwrap_01_blk",
			"gm_xx_headgear_headwrap_01_blu",
			"gm_xx_headgear_headwrap_01_dino",
			"gm_xx_headgear_headwrap_01_flk",
			"gm_xx_headgear_headwrap_01_frog",
			"gm_xx_headgear_headwrap_01_grn",
			"gm_xx_headgear_headwrap_01_m84",
			"gm_xx_headgear_headwrap_01_moro",
			"gm_xx_headgear_headwrap_01_oli",
			"gm_xx_headgear_headwrap_01_smp",
			"gm_xx_headgear_headwrap_01_str",
			"gm_xx_headgear_headwrap_01_trp",
			"gm_xx_headgear_headwrap_01_wht",
			"gm_xx_headgear_headwrap_crew_01_blk",
			"gm_xx_headgear_headwrap_crew_01_flk",
			"gm_xx_headgear_headwrap_crew_01_grn",
			"gm_xx_headgear_headwrap_crew_01_m84",
			"gm_xx_headgear_headwrap_crew_01_oli",
			"gm_xx_headgear_headwrap_crew_01_smp",
			"gm_xx_headgear_headwrap_crew_01_trp",
			"gm_gc_army_headgear_m56",
			"gm_gc_army_headgear_m56_net",
			"gm_gc_army_headgear_m56_cover_str",
			"gm_gc_army_headgear_m56_cover_win",
			"gm_gc_army_headgear_m56_cover_blu",
			"gm_gc_army_headgear_crewhat_80_blk",
			"gm_gc_pol_headgear_cap_80_blu",
			"gm_gc_army_headgear_cap_80_gry",
			"gm_gc_army_headgear_hat_80_grn",
			"gm_gc_bgs_headgear_hat_80_gry",
			"gm_gc_headgear_zsh3_orn",
			"gm_gc_headgear_zsh3_wht",
			"gm_gc_headgear_zsh3_blu",
			"gm_gc_headgear_fjh_model4_oli",
			"gm_gc_headgear_fjh_model4_wht",
			"gm_gc_headgear_beret_blk",
			"gm_gc_headgear_beret_orn",
			"gm_gc_headgear_beret_str",
			"gm_gc_headgear_beret_officer_blk",
			"gm_gc_headgear_beret_officer_orn",
			"gm_gc_headgear_beret_officer_str",
			"gm_ge_headgear_m62",
			"gm_ge_headgear_m62_net",
			"gm_ge_headgear_m62_cover_flk",
			"gm_ge_headgear_m62_cover_blu",
			"gm_ge_headgear_m62_cover_win",
			"gm_ge_headgear_m62_cover_wdl",
			"gm_ge_headgear_m62_smr_grs_01",
			"gm_ge_headgear_m62_smr_grs_02",
			"gm_ge_headgear_m62_smr_grs_03",
			"gm_ge_headgear_m62_smr_grs_04",
			"gm_ge_headgear_m62_smr_for_01",
			"gm_ge_headgear_m62_smr_for_02",
			"gm_ge_headgear_m62_smr_for_03",
			"gm_ge_headgear_m62_smr_for_04",
			"gm_ge_headgear_m62_aut_grs_01",
			"gm_ge_headgear_m62_aut_grs_02",
			"gm_ge_headgear_m62_aut_grs_03",
			"gm_ge_headgear_m62_aut_grs_04",
			"gm_ge_headgear_m62_win_pap_01",
			"gm_ge_headgear_beret_grn",
			"gm_ge_headgear_beret_bdx",
			"gm_ge_headgear_beret_blk",
			"gm_ge_headgear_beret_red",
			"gm_ge_headgear_beret_blu",
			"gm_ge_headgear_beret_mrb",
			"gm_ge_headgear_beret_un",
			"gm_ge_headgear_beret_bdx_armyaviation",
			"gm_ge_headgear_beret_bdx_lrrp",
			"gm_ge_headgear_beret_bdx_paratrooper",
			"gm_ge_headgear_beret_bdx_specop",
			"gm_ge_headgear_beret_blk_antitank",
			"gm_ge_headgear_beret_blk_armor",
			"gm_ge_headgear_beret_blk_armorrecon",
			"gm_ge_headgear_beret_blk_recon",
			"gm_ge_bgs_headgear_beret_grn_sf",
			"gm_ge_bgs_headgear_beret_grn",
			"gm_ge_headgear_beret_grn_guardbtl",
			"gm_ge_headgear_beret_grn_infantry",
			"gm_ge_headgear_beret_grn_mechinf",
			"gm_ge_headgear_beret_grn_music",
			"gm_ge_headgear_beret_red_antiair",
			"gm_ge_headgear_beret_red_artillery",
			"gm_ge_headgear_beret_red_engineer",
			"gm_ge_headgear_beret_red_geoinfo",
			"gm_ge_headgear_beret_red_maintenance",
			"gm_ge_headgear_beret_red_militarypolice",
			"gm_ge_headgear_beret_red_nbc",
			"gm_ge_headgear_beret_red_opcom",
			"gm_ge_headgear_beret_red_signals",
			"gm_ge_headgear_beret_red_supply",
			"gm_ge_headgear_beret_blu_medical",
			"gm_ge_headgear_beret_crew_grn",
			"gm_ge_headgear_beret_crew_bdx",
			"gm_ge_headgear_beret_crew_blk",
			"gm_ge_headgear_beret_crew_red",
			"gm_ge_headgear_beret_crew_blu",
			"gm_ge_headgear_beret_crew_mrb",
			"gm_ge_headgear_beret_crew_un",
			"gm_ge_headgear_beret_crew_bdx_armyaviation",
			"gm_ge_headgear_beret_crew_bdx_lrrp",
			"gm_ge_headgear_beret_crew_bdx_paratrooper",
			"gm_ge_headgear_beret_crew_bdx_specop",
			"gm_ge_headgear_beret_crew_blk_antitank",
			"gm_ge_headgear_beret_crew_blk_armor",
			"gm_ge_headgear_beret_crew_blk_armorrecon",
			"gm_ge_headgear_beret_crew_blk_recon",
			"gm_ge_headgear_beret_crew_grn_guardbtl",
			"gm_ge_headgear_beret_crew_grn_infantry",
			"gm_ge_headgear_beret_crew_grn_mechinf",
			"gm_ge_headgear_beret_crew_grn_music",
			"gm_ge_bgs_headgear_beret_crew_grn_sf",
			"gm_ge_bgs_headgear_beret_crew_grn",
			"gm_ge_headgear_beret_crew_red_antiair",
			"gm_ge_headgear_beret_crew_red_artillery",
			"gm_ge_headgear_beret_crew_red_engineer",
			"gm_ge_headgear_beret_crew_red_geoinfo",
			"gm_ge_headgear_beret_crew_red_maintenance",
			"gm_ge_headgear_beret_crew_red_militarypolice",
			"gm_ge_headgear_beret_crew_red_nbc",
			"gm_ge_headgear_beret_crew_red_opcom",
			"gm_ge_headgear_beret_crew_red_signals",
			"gm_ge_headgear_beret_crew_red_supply",
			"gm_ge_headgear_beret_crew_blu_medical",
			"gm_ge_headgear_hat_80_oli",
			"gm_ge_headgear_hat_80_m62_oli",
			"gm_ge_headgear_hat_80_gry",
			"gm_ge_headgear_hat_90_flk",
			"gm_ge_headgear_hat_90_trp",
			"gm_ge_headgear_sidecap_80_oli",
			"gm_ge_headgear_sidecap_80_m62_oli",
			"gm_ge_headgear_hat_boonie_oli",
			"gm_ge_headgear_hat_boonie_wdl",
			"gm_ge_headgear_hat_boonie_flk",
			"gm_ge_headgear_hat_boonie_trp",
			"gm_ge_headgear_hat_beanie_blk",
			"gm_ge_headgear_hat_beanie_crew_blk",
			"gm_ge_headgear_winterhat_80_oli",
			"gm_ge_headgear_headset_crew_oli",
			"gm_ge_headgear_crewhat_80_blk",
			"gm_ge_pol_headgear_cap_80_grn",
			"gm_ge_pol_headgear_cap_80_wht",
			"gm_ge_dbp_headgear_cap_80_blu",
			"gm_ge_bgs_headgear_m35_53_blk",
			"gm_ge_bgs_headgear_m35_53_net_blk",
			"gm_ge_ff_headgear_m35_53_tan",
			"gm_ge_bgs_headgear_m38_72_bgr",
			"gm_ge_bgs_headgear_m38_72_goggles_bgr",
			"gm_ge_headgear_sph4_oli",
			"gm_ge_headgear_m92_flk",
			"gm_ge_headgear_m92_trp",
			"gm_ge_headgear_hat_90_m92_flk",
			"gm_ge_headgear_hat_90_m92_trp",
			"gm_ge_headgear_m92_cover_win",
			"gm_ge_headgear_m92_cover_oli",
			"gm_ge_headgear_m92_cover_blk",
			"gm_ge_headgear_m92_glasses_flk",
			"gm_ge_headgear_m92_glasses_trp",
			"gm_ge_headgear_m92_cover_glasses_win",
			"gm_ge_headgear_m92_cover_glasses_oli",
			"gm_ge_headgear_m92_cover_glasses_blk",
			"gm_ge_headgear_psh77_oli",
			"gm_ge_headgear_psh77_down_oli",
			"gm_ge_headgear_psh77_up_oli",
			"gm_ge_bgs_headgear_psh77_cover_smp",
			"gm_ge_bgs_headgear_psh77_cover_down_smp",
			"gm_ge_bgs_headgear_psh77_cover_up_smp",
			"gm_ge_bgs_headgear_psh77_cover_str",
			"gm_ge_bgs_headgear_psh77_cover_down_str",
			"gm_ge_bgs_headgear_psh77_cover_up_str",
			"gm_pl_headgear_wz67_oli",
			"gm_pl_army_headgear_wz67_oli",
			"gm_pl_army_headgear_wz67_net_oli",
			"gm_pl_headgear_wz67_cover_win",
			"gm_pl_army_headgear_cap_80_moro",
			"gm_pl_army_headgear_cap_80_frog",
			"gm_pl_army_headgear_wz63_oli",
			"gm_pl_army_headgear_wz63_net_oli",
			"gm_pl_headgear_beret_bdx",
			"gm_pl_headgear_beret_blu",
			"gm_pl_headgear_beret_blk",
			"gm_pl_headgear_beret_blk_empty",
			"gm_dk_headgear_m52_oli",
			"gm_dk_headgear_m52_net_oli",
			"gm_dk_headgear_m52_net_win",
			"gm_dk_headgear_m96_oli",
			"gm_dk_headgear_m96_blu",
			"gm_dk_headgear_m96_cover_m84",
			"gm_dk_headgear_m96_cover_wdl",
			"gm_dk_headgear_m96_cover_wht",
			"gm_dk_headgear_hat_boonie_m84"
			/*"H_Cap_blk",
			"H_Cap_blk_Raven",
			"H_Cap_blu",
			"H_Cap_brn_SPECOPS",
			"H_Cap_grn",
			"H_Cap_headphones",
			"H_Cap_khaki_specops_UK",
			"H_Cap_oli",
			"H_Cap_press",
			"H_Cap_red",
			"H_Cap_tan",
			"H_Cap_tan_specops_US",
			"H_Watchcap_blk",
			"H_Watchcap_camo",
			"H_Watchcap_khk",
			"H_Watchcap_sgg",
			"H_MilCap_blue",
			"H_MilCap_dgtl",
			"H_MilCap_mcamo",
			"H_MilCap_ocamo",
			"H_MilCap_oucamo",
			"H_MilCap_rucamo",
			"H_Bandanna_camo",
			"H_Bandanna_cbr",
			"H_Bandanna_gry",
			"H_Bandanna_khk",
			"H_Bandanna_khk_hs",
			"H_Bandanna_mcamo",
			"H_Bandanna_sgg",
			"H_Bandanna_surfer",
			"H_Booniehat_dgtl",
			"H_Booniehat_dirty",
			"H_Booniehat_grn",
			"H_Booniehat_indp",
			"H_Booniehat_khk",
			"H_Booniehat_khk_hs",
			"H_Booniehat_mcamo",
			"H_Booniehat_tan",
			"H_Hat_blue",
			"H_Hat_brown",
			"H_Hat_camo",
			"H_Hat_checker",
			"H_Hat_grey",
			"H_Hat_tan",
			"H_StrawHat",
			"H_StrawHat_dark",
			"H_Beret_02",
			"H_Beret_blk",
			"H_Beret_blk_POLICE",
			"H_Beret_brn_SF",
			"H_Beret_Colonel",
			"H_Beret_grn",
			"H_Beret_grn_SF",
			"H_Beret_ocamo",
			"H_Beret_red",
			"H_Shemag_khk",
			"H_Shemag_olive",
			"H_Shemag_olive_hs",
			"H_Shemag_tan",
			"H_ShemagOpen_khk",
			"H_ShemagOpen_tan",
			"H_TurbanO_blk",
			"H_HelmetB",
			"H_HelmetB_black",
			"H_HelmetB_camo",
			"H_HelmetB_desert",
			"H_HelmetB_grass",
			"H_HelmetB_light",
			"H_HelmetB_light_black",
			"H_HelmetB_light_desert",
			"H_HelmetB_light_grass",
			"H_HelmetB_light_sand",
			"H_HelmetB_light_snakeskin",
			"H_HelmetB_paint",
			"H_HelmetB_plain_blk",
			"H_HelmetB_sand",
			"H_HelmetB_snakeskin",
			"H_HelmetCrew_B",
			"H_HelmetCrew_I",
			"H_HelmetCrew_O",
			"H_HelmetIA",
			"H_HelmetIA_camo",
			"H_HelmetIA_net",
			"H_HelmetLeaderO_ocamo",
			"H_HelmetLeaderO_oucamo",
			"H_HelmetO_ocamo",
			"H_HelmetO_oucamo",
			"H_HelmetSpecB",
			"H_HelmetSpecB_blk",
			"H_HelmetSpecB_paint1",
			"H_HelmetSpecB_paint2",
			"H_HelmetSpecO_blk",
			"H_HelmetSpecO_ocamo",
			"H_CrewHelmetHeli_B",
			"H_CrewHelmetHeli_I",
			"H_CrewHelmetHeli_O",
			"H_HelmetCrew_I",
			"H_HelmetCrew_B",
			"H_HelmetCrew_O",
			"H_PilotHelmetHeli_B",
			"H_PilotHelmetHeli_I",
			"H_PilotHelmetHeli_O",

			//Apex
			"H_Helmet_Skate",
			"H_HelmetB_TI_tna_F",
			//"H_HelmetO_ViperSP_hex_F",
			//"H_HelmetO_ViperSP_ghex_F",
			"H_HelmetB_tna_F",
			"H_HelmetB_Enh_tna_F",
			"H_HelmetB_Light_tna_F",
			"H_HelmetSpecO_ghex_F",
			"H_HelmetLeaderO_ghex_F",
			"H_HelmetO_ghex_F",
			"H_HelmetCrew_O_ghex_F",
			"H_MilCap_tna_F",
			"H_MilCap_ghex_F",
			"H_Booniehat_tna_F",
			"H_Beret_gen_F",
			"H_MilCap_gen_F",
			"H_Cap_oli_Syndikat_F",
			"H_Cap_tan_Syndikat_F",
			"H_Cap_blk_Syndikat_F",
			"H_Cap_grn_Syndikat_F"*/
		};
	};

	class Glasses
	{
		name = "Glasses";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\Goggles_ca.paa";
		items[] =
		{
			/*"G_Spectacles",
			"G_Spectacles_Tinted",
			"G_Combat",
			"G_Lowprofile",
			"G_Shades_Black",
			"G_Shades_Green",
			"G_Shades_Red",
			"G_Squares",
			"G_Squares_Tinted",
			"G_Sport_BlackWhite",
			"G_Sport_Blackyellow",
			"G_Sport_Greenblack",
			"G_Sport_Checkered",
			"G_Sport_Red",
			"G_Tactical_Black",
			"G_Aviator",
			"G_Lady_Mirror",
			"G_Lady_Dark",
			"G_Lady_Red",
			"G_Lady_Blue",
			"G_Diving",
			"G_B_Diving",
			"G_O_Diving",
			"G_I_Diving",
			"G_Goggles_VR",
			"G_Balaclava_blk",
			"G_Balaclava_oli",
			"G_Balaclava_combat",
			"G_Balaclava_lowprofile",
			"G_Bandanna_blk",
			"G_Bandanna_oli",
			"G_Bandanna_khk",
			"G_Bandanna_tan",
			"G_Bandanna_beast",
			"G_Bandanna_shades",
			"G_Bandanna_sport",
			"G_Bandanna_aviator",
			"G_Shades_Blue",
			"G_Sport_Blackred",
			"G_Tactical_Clear",
			"G_Balaclava_TI_blk_F",
			"G_Balaclava_TI_tna_F",
			"G_Balaclava_TI_G_blk_F",
			"G_Balaclava_TI_G_tna_F",
			"G_Combat_Goggles_tna_F"*/
			"gm_headgear_foliage_summer_grass_01",
			"gm_headgear_foliage_summer_grass_02",
			"gm_headgear_foliage_summer_grass_03",
			"gm_headgear_foliage_summer_grass_04",
			"gm_headgear_foliage_summer_forest_01",
			"gm_headgear_foliage_summer_forest_02",
			"gm_headgear_foliage_summer_forest_03",
			"gm_headgear_foliage_summer_forest_04",
			"gm_xx_facewear_scarf_01_blk",
			"gm_xx_facewear_scarf_01_blu",
			"gm_xx_facewear_scarf_01_flk",
			"gm_xx_facewear_scarf_01_frog",
			"gm_xx_facewear_scarf_01_grn",
			"gm_xx_facewear_scarf_01_gry",
			"gm_xx_facewear_scarf_01_m84",
			"gm_xx_facewear_scarf_01_moro",
			"gm_xx_facewear_scarf_01_oli",
			"gm_xx_facewear_scarf_01_pt1",
			"gm_xx_facewear_scarf_01_pt2",
			"gm_xx_facewear_scarf_01_pt3",
			"gm_xx_facewear_scarf_01_red",
			"gm_xx_facewear_scarf_01_str",
			"gm_xx_facewear_scarf_01_trp",
			"gm_xx_facewear_scarf_01_wht",
			"gm_xx_facewear_scarf_02_blk",
			"gm_xx_facewear_scarf_02_grn",
			"gm_xx_facewear_scarf_02_oli",
			"gm_xx_facewear_scarf_02_wht",
			"gm_gc_army_facewear_schm41m",
			"gm_gc_army_facewear_dustglasses",
			"gm_ge_facewear_m65",
			"gm_ge_facewear_dustglasses",
			"gm_ge_facewear_sunglasses",
			"gm_ge_facewear_acidgoggles",
			"gm_ge_facewear_glacierglasses",
			"gm_ge_facewear_stormhood_blk",
			"gm_ge_facewear_stormhood_brd",
			"gm_ge_facewear_stormhood_dustglasses_blk"
		};
	};

	class PointerAttachments
	{
		name = "Pointer Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"acc_flashlight",
			"acc_pointer_IR",
			//class sideAttachments
			"gm_flashlightp2_brk_ak74handguard_dino",
			"gm_flashlightp2_brk_akhandguard_dino",
			"gm_flashlightp2_brk_akkhandguard_dino",
			"gm_flashlightp2_wht_ak74handguard_blu",
			"gm_flashlightp2_wht_akhandguard_blu",
			"gm_flashlightp2_wht_akkhandguard_blu",
			"gm_maglite_2d_hkslim_blk",
			"gm_surefire_l60_ir_bayonetg11_blk",
			"gm_surefire_l60_ir_hoseclamp_blk",
			"gm_surefire_l60_ir_surefire_blk",
			"gm_surefire_l60_red_bayonetg11_blk",
			"gm_surefire_l60_red_hoseclamp_blk",
			"gm_surefire_l60_red_surefire_blk",
			"gm_surefire_l60_wht_bayonetg11_blk",
			"gm_surefire_l60_wht_hoseclamp_blk",
			"gm_surefire_l60_wht_surefire_blk",
			"gm_surefire_l72_grn_bayonetg11_blk",
			"gm_surefire_l72_grn_hoseclamp_blk",	
			"gm_surefire_l72_grn_surefire_blk",
			"gm_surefire_l72_red_bayonetg11_blk",
			"gm_surefire_l72_red_hoseclamp_blk",	
			"gm_surefire_l72_red_surefire_blk",	
			"gm_surefire_l75_ir_bayonetg11_blk",	
			"gm_surefire_l75_ir_hoseclamp_blk",	
			"gm_surefire_l75_ir_surefire_blk"

		};
	};

	class BipodAttachments
	{
		name = "Bipod Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itembipod_ca.paa";
		items[] =
		{
			/*"bipod_01_F_blk",
			"bipod_01_F_mtp",
			"bipod_01_F_snd",
			"bipod_02_F_blk",
			"bipod_02_F_hex",
			"bipod_02_F_tan",
			"bipod_03_F_blk",
			"bipod_03_F_oli",
			//Apex
			"bipod_01_F_khk"*/
			"gm_g3_bipod_blk",
			"gm_g8_bipod_blk",
			"gm_msg90_bipod_blk"
		};
	};

	class MuzzleAttachments
	{
		name = "Suppressor Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemmuzzle_ca.paa";
		items[] =
		{
			/*"muzzle_snds_338_black",
			"muzzle_snds_338_green",
			"muzzle_snds_338_sand",
			"muzzle_snds_93mmg",
			"muzzle_snds_93mmg_tan",
			"muzzle_snds_acp",
			"muzzle_snds_B",
			"muzzle_snds_H",
			"muzzle_snds_H_MG",
			"muzzle_snds_H_SW",
			"muzzle_snds_L",
			"muzzle_snds_M",
			//Apex
			"muzzle_snds_H_khk_F",
			"muzzle_snds_H_snd_F",
			"muzzle_snds_58_blk_F",
			"muzzle_snds_m_khk_F",
			"muzzle_snds_m_snd_F",
			"muzzle_snds_B_khk_F",
			"muzzle_snds_B_snd_F",
			"muzzle_snds_58_wdm_F",
			"muzzle_snds_65_TI_blk_F",
			"muzzle_snds_65_TI_hex_F",
			"muzzle_snds_65_TI_ghex_F",
			"muzzle_snds_H_MG_blk_F",
			"muzzle_snds_H_MG_khk_F"*/
			//suppressors
			"gm_suppressor_atec150_556mm_blk",	
			"gm_suppressor_atec150_556mm_long_blk",
			"gm_suppressor_atec150_762mm_blk",
			"gm_suppressor_atec150_762mm_long_blk",
			"gm_suppressor_hknavy_9mm_gry",
			"gm_suppressor_kacnavy_9mm_blk",
			"gm_suppressor_kacnavyk_9mm_blk",
			"gm_suppressor_kacnavysd_9mm_blk",
			"gm_suppressor_m10_9mm_blk",
			"gm_suppressor_pbs4_545mm_blk",
			"gm_suppressor_safloryt_blk",
			"gm_suppressor_tgpv_762mm_blk"
		};
	};

	class UAVs
	{
		name = "Unmanned Aerial Vehicles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
		items[] =
		{
			"I_UavTerminal",
			"I_UAV_01_backpack_F"
		};
	};

	class StaticMGs
	{
		name = "Static Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"O_HMG_01_support_F",
			//"O_HMG_01_support_high_F", // Does not seem to work with HMG01, only the lower version does
			"O_HMG_01_weapon_F"
		};
	};

	class OpticAttachments
	{
		name = "Scopes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemoptic_ca.paa";
		items[] =
		{
			/*"optic_Aco",
			"optic_ACO_grn",
			"optic_ACO_grn_smg",
			"optic_Aco_smg",
			"optic_AMS",
			"optic_AMS_khk",
			"optic_AMS_snd",
			"optic_Arco",
			"optic_DMS",
			"optic_Hamr",
			"optic_Holosight",
			"optic_Holosight_smg",
			"optic_KHS_blk",
			"optic_KHS_hex",
			"optic_KHS_old",
			"optic_KHS_tan",
			"optic_LRPS",
			"optic_MRCO",
			"optic_MRD",
			"optic_Nightstalker",
			"optic_NVS",
			"optic_SOS",
			//"optic_tws",
			//"optic_tws_mg",
			"optic_Yorris",
			//Apex
			"optic_Arco_blk_F",
			"optic_Arco_ghex_F",
			"optic_DMS_ghex_F",
			"optic_Hamr_khk_F",
			"optic_ERCO_blk_F",
			"optic_ERCO_khk_F",
			"optic_ERCO_snd_F",
			"optic_SOS_khk_F",
			"optic_LRPS_tna_F",
			"optic_LRPS_ghex_F",
			"optic_Holosight_blk_F",
			"optic_Holosight_khk_F",
			"optic_Holosight_smg_blk_F"*/
			//gm attachments
			"gm_blits_ris_blk",
			"gm_blits_stanagClaw_blk",
			"gm_blits_stanagClaw_oli",
			"gm_blits_stanagHK_blk",
			"gm_blits_stanagSig_blk",
			"gm_c79a1_blk",
			"gm_c79a1_oli",
			"gm_colt4x20_ar15_blk",
			"gm_colt4x20_stanagClaw_blk",
			"gm_diavari_da_stanagClaw_blk",
			"gm_diavari_da_stanagClaw_oli",
			"gm_feroz24_ris_blk",
			"gm_feroz24_stanagClaw_blk",
			"gm_feroz24_stanagClaw_oli",
			"gm_feroz24_stanagHK_blk",
			"gm_feroz24_stanagSig_blk",
			"gm_feroz2x17_pzf44_2_blk",
			"gm_feroz2x17_pzf84_blk",
			"gm_feroz51_pzf44_2_oli",
			"gm_feroz51_pzf84_oli",
			"gm_feroz51_ris_oli",
			"gm_feroz51_stanagClaw_oli",
			"gm_feroz51_stanagHK_oli",
			"gm_feroz51_stanagSig_oli",
			"gm_g11_lps_prism11mm_blk",
			"gm_g11_mps_prism11mm_blk",
			"gm_ls1500_ir_ris_blk",
			"gm_ls1500_ir_stanagClaw_blk",
			"gm_ls1500_ir_stanaghk_blk",
			"gm_ls1500_ir_stanagSig_blk",
			"gm_ls1500_red_ris_blk",
			"gm_ls1500_red_stanagClaw_blk",
			"gm_ls1500_red_stanaghk_blk",
			"gm_ls1500_red_stanagSig_blk",
			"gm_ls45_ir_ris_blk",
			"gm_ls45_ir_stanagClaw_blk",
			"gm_ls45_ir_stanaghk_blk",
			"gm_ls45_ir_stanagSig_blk",
			"gm_ls45_ir_uziclaw_blk",
			"gm_ls45_red_ris_blk",
			"gm_ls45_red_stanagClaw_blk",
			"gm_ls45_red_stanaghk_blk",
			"gm_ls45_red_stanagSig_blk",
			"gm_ls45_red_uziclaw_blk",
			"gm_lsminiv_ir_ris_blk",
			"gm_lsminiv_ir_stanagClaw_blk",
			"gm_lsminiv_ir_stanaghk_blk",
			"gm_lsminiv_ir_stanagSig_blk",
			"gm_lsminiv_red_ris_blk",
			"gm_lsminiv_red_stanagClaw_blk",
			"gm_lsminiv_red_stanaghk_blk",
			"gm_lsminiv_red_stanagSig_blk",
			"gm_maglite_3d_ris_blk",
			"gm_maglite_3d_stanagClaw_blk",
			"gm_maglite_3d_stanaghk_blk",
			"gm_maglite_3d_stanagSig_blk",
			"gm_nspu_dovetail_blk",
			"gm_nspu_dovetail_gry",
			"gm_pgo7v_blk",
			"gm_pka_dovetail_blk",
			"gm_pka_dovetail_gry",
			"gm_pso1_dovetail_blk",
			"gm_pso1_dovetail_gry",
			"gm_pso6x36_1_dovetail_blk",
			"gm_pso6x36_1_dovetail_gry",
			"gm_rv_ris_blk",
			"gm_rv_stanagClaw_blk",
			"gm_rv_stanagClaw_oli",
			"gm_rv_stanagHK_blk",
			"gm_rv_stanagSig_blk",
			"gm_streamlight_sl20_ris_blk",
			"gm_streamlight_sl20_ris_brn",
			"gm_streamlight_sl20_stanagClaw_blk",
			"gm_streamlight_sl20_stanagClaw_brn",
			"gm_streamlight_sl20_stanaghk_blk",
			"gm_streamlight_sl20_stanaghk_brn",
			"gm_streamlight_sl20_stanagSig_blk",
			"gm_streamlight_sl20_stanagSig_brn",
			"gm_zf10x42_ris_blk",
			"gm_zf10x42_ris_oli",
			"gm_zf10x42_stanagClaw_blk",
			"gm_zf10x42_stanagClaw_oli",
			"gm_zf10x42_stanaghk_blk",
			"gm_zf10x42_stanaghk_oli",
			"gm_zf10x42_stanagsig_blk",
			"gm_zf10x42_stanagsig_oli",
			"gm_zf6x42_psg1_stanag_blk",
			"gm_zfk4x25_blk",
			"gm_zln1k_grn_dovetail_blk",
			"gm_zln1k_grn_dovetail_gry",
			"gm_zln1k_ir_dovetail_blk",
			"gm_zpp_stanagClaw_blk",
			"gm_zvn64_ak",
			"gm_zvn64_lmgk500",	
			"gm_zvn64_rpk"
		};
	};

	class Hardware
	{
		name = "Hardware";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{

			"Exile_Item_DuctTape",
			"Exile_Item_ExtensionCord",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_JunkMetal",
			"Exile_Item_LightBulb",
			"Exile_Item_MetalBoard",
			"Exile_Item_MetalPole",
			"Exile_Item_SafeKit",
			"Exile_Item_CamoTentKit",
			"Exile_Item_CodeLock",
			"Exile_Item_MetalScrews",
			"Exile_Item_MetalWire",
			"Exile_Item_Laptop",
			"Exile_Item_BaseCameraKit",
			"Exile_Item_MetalHedgehogKit",
			"Exile_Item_Cement",
			"Exile_Item_Sand",
			"Exile_Item_MobilePhone"
			/*
			--Unused--
			"Exile_Item_SprayCan_Black",
			"Exile_Item_SprayCan_Red",
			"Exile_Item_SprayCan_Green",
			"Exile_Item_SprayCan_White",
			"Exile_Item_SprayCan_Blue",
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_FireExtinguisher",
			"Exile_Item_OilCanister",
			"Exile_Item_Hammer",
			"Exile_Item_Carwheel",
			"Exile_Item_SleepingMat",
			"Exile_Item_Defibrillator",
			"Exile_Item_Wrench",
			"Exile_Item_Rope"*/
							
		};
	};

	class Food
	{
		name = "Fast Food";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_EMRE",
			"Exile_Item_GloriousKnakworst",
			"Exile_Item_Surstromming",
			"Exile_Item_SausageGravy",
			"Exile_Item_Catfood",
			"Exile_Item_ChristmasTinner",
			"Exile_Item_BBQSandwich",
			"Exile_Item_MacasCheese",
			"Exile_Item_Dogfood",
			"Exile_Item_BeefParts",
			"Exile_Item_Cheathas",
			"Exile_Item_Noodles",
			"Exile_Item_SeedAstics",
			"Exile_Item_Raisins",
			"Exile_Item_Moobar",
			"Exile_Item_InstantCoffee"
			
			// Hunted Animals
			// Note: Adding these to the trader will defeat the purpose of hunting!
			/*
			"Exile_Item_SheepSteak_Cooked",
			"Exile_Item_AlsatianSteak_Cooked",
			"Exile_Item_CatSharkFilet_Cooked",
			"Exile_Item_FinSteak_Cooked",
			"Exile_Item_GoatSteak_Cooked",
			"Exile_Item_TurtleFilet_Cooked",
			"Exile_Item_TunaFilet_Cooked",
			"Exile_Item_RabbitSteak_Cooked",
			"Exile_Item_ChickenFilet_Cooked",
			"Exile_Item_RoosterFilet_Cooked",
			"Exile_Item_MulletFilet_Cooked",
			"Exile_Item_SalemaFilet_Cooked",
			"Exile_Item_MackerelFilet_Cooked",
			"Exile_Item_OrnateFilet_Cooked",
			"Exile_Item_SnakeFilet_Cooked",
			"Exile_Item_CatSharkFilet_Raw",
			"Exile_Item_TunaFilet_Raw",
			"Exile_Item_AlsatianSteak_Raw",
			"Exile_Item_TurtleFilet_Raw",
			"Exile_Item_SheepSteak_Raw",
			"Exile_Item_FinSteak_Raw",
			"Exile_Item_GoatSteak_Raw",
			"Exile_Item_ChickenFilet_Raw",
			"Exile_Item_RoosterFilet_Raw",
			"Exile_Item_MackerelFilet_Raw",
			"Exile_Item_MulletFilet_Raw",
			"Exile_Item_OrnateFilet_Raw",
			"Exile_Item_RabbitSteak_Raw",
			"Exile_Item_SalemaFilet_Raw",
			"Exile_Item_SnakeFilet_Raw"
			*/
		};
	};
	
	class NonVeganFood
	{
		name = "Non-Vegan Food";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_CatSharkFilet_Raw",
			"Exile_Item_TunaFilet_Raw",
			"Exile_Item_AlsatianSteak_Raw",
			"Exile_Item_TurtleFilet_Raw",
			"Exile_Item_SheepSteak_Raw",
			"Exile_Item_FinSteak_Raw",
			"Exile_Item_GoatSteak_Raw",
			"Exile_Item_ChickenFilet_Raw",
			"Exile_Item_RoosterFilet_Raw",
			"Exile_Item_MackerelFilet_Raw",
			"Exile_Item_MulletFilet_Raw",
			"Exile_Item_OrnateFilet_Raw",
			"Exile_Item_RabbitSteak_Raw",
			"Exile_Item_SalemaFilet_Raw",
			"Exile_Item_SnakeFilet_Raw"
		};
	};
	

	class Drinks
	{
		name = "Drinks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_PlasticBottleCoffee",
			"Exile_Item_PowerDrink",
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_Beer",
			"Exile_Item_EnergyDrink",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_MountainDupe",
			"Exile_Item_PlasticBottleEmpty"
		};
	};

	class Tools
	{
		name = "Tools";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_Matches",
			"Exile_Item_CookingPot",
			"Exile_Item_CanOpener",
			"Exile_Item_Handsaw",
			"Exile_Item_Pliers",
			"Exile_Item_Grinder",
			"Exile_Item_Foolbox",

			/*
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_FireExtinguisher",
			"Exile_Item_Hammer",
			"Exile_Item_OilCanister",
			"Exile_Item_Screwdriver",
			"Exile_Item_Shovel",
			"Exile_Item_Wrench",
			"Exile_Item_SleepingMat",
			"Exile_Item_ToiletPaper",
			"Exile_Item_ZipTie",
			"Exile_Item_BurlapSack",
			"Exile_Item_Bullets_556",
			"Exile_Item_Bullets_762",
			"Exile_Item_WeaponParts",
			*/

			"Binocular",
			"Rangefinder",
			/*
			"Laserdesignator",
			"Laserdesignator_02",
			"Laserdesignator_03",
			*/
			
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemRadio",
			"ItemWatch",
			"Exile_Item_XM8",
			//gm tools
			"gm_bayonet_6x3_blk",
			"gm_bayonet_6x3_wud",
			"gm_bayonet_g11_blk",
			"gm_bayonet_g11_oli",
			"gm_bayonet_g3_blk",
			"gm_bayonet_g3_oli",
			"gm_boltcutter",
			"gm_gc_army_gauzeBandage",
			"gm_gc_army_medbox",
			"gm_gc_army_medkit",
			"gm_gc_compass_f73",
			"gm_gc_firstaidkit_vehicle",
			"gm_ge_army_burnBandage",
			"gm_ge_army_conat2",
			"gm_ge_army_firstaidkit_vehicle",
			"gm_ge_army_gauzeBandage",
			"gm_ge_army_gauzeCompress",
			"gm_ge_army_medkit_80",
			"gm_ge_firstaidkit_vehicle",
			"gm_repairkit_01",
			"gm_watch_kosei_80"			
		};
	};

	class FirstAid
	{
		name = "FirstAid";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_InstaDoc",
			"Exile_Item_Bandage",
			"Exile_Item_Vishpirin",
			"Exile_Item_Heatpack",
			"gm_gc_army_gauzeBandage",
			"gm_gc_army_medbox",
			"gm_gc_army_medkit",
			"gm_gc_compass_f73",
			"gm_gc_firstaidkit_vehicle",
			"gm_ge_army_burnBandage",
			"gm_ge_army_conat2",
			"gm_ge_army_firstaidkit_vehicle",
			"gm_ge_army_gauzeBandage",
			"gm_ge_army_gauzeCompress",
			"gm_ge_army_medkit_80",
			"gm_ge_firstaidkit_vehicle"
			// Not available in 0.9.4!
			//"Exile_Item_Defibrillator"
		};
	};

	class Navigation
	{
		name = "Special Environment";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"B_Parachute",
			"V_RebreatherB",
			"V_RebreatherIA",
			"V_RebreatherIR",
			"Exile_Headgear_GasMask",
			"G_Diving",
			"G_B_Diving",
			"G_O_Diving",
			"G_I_Diving"
			//"NVGoggles",
			//"NVGoggles_INDEP",
			//"NVGoggles_OPFOR",
			//"O_NVGoggles_hex_F",
			//"O_NVGoggles_urb_F",
			//"O_NVGoggles_ghex_F",
			//"NVGoggles_tna_F"
		};
	};

	class Backpacks
	{
		name = "Backpacks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\backpack_ca.paa";
		items[] =
		{
			/*"B_AssaultPack_blk",
			"B_AssaultPack_cbr",
			"B_AssaultPack_dgtl",
			"B_AssaultPack_khk",
			"B_AssaultPack_mcamo",
			"B_AssaultPack_rgr",
			"B_AssaultPack_sgg",
			"B_Bergen_blk",
			"B_Bergen_mcamo",
			"B_Bergen_rgr",
			"B_Bergen_sgg",
			"B_Carryall_cbr",
			"B_Carryall_khk",
			"B_Carryall_mcamo",
			"B_Carryall_ocamo",
			"B_Carryall_oli",
			"B_Carryall_oucamo",
			"B_FieldPack_blk",
			"B_FieldPack_cbr",
			"B_FieldPack_ocamo",
			"B_FieldPack_oucamo",
			"B_HuntingBackpack",
			"B_Kitbag_cbr",
			"B_Kitbag_mcamo",
			"B_Kitbag_sgg",
			"B_OutdoorPack_blk",
			"B_OutdoorPack_blu",
			"B_OutdoorPack_tan",
			"B_TacticalPack_blk",
			"B_TacticalPack_mcamo",
			"B_TacticalPack_ocamo",
			"B_TacticalPack_oli",
			"B_TacticalPack_rgr",
			//Apex
			"B_Bergen_mcamo_F",
			"B_Bergen_dgtl_F",
			"B_Bergen_hex_F",
			"B_Bergen_tna_F",
			"B_AssaultPack_tna_F",
			"B_Carryall_ghex_F",
			"B_FieldPack_ghex_F",
			"B_ViperHarness_blk_F",
			"B_ViperHarness_ghex_F",
			"B_ViperHarness_hex_F",
			"B_ViperHarness_khk_F",
			"B_ViperHarness_oli_F",
			"B_ViperLightHarness_blk_F",
			"B_ViperLightHarness_ghex_F",
			"B_ViperLightHarness_hex_F",
			"B_ViperLightHarness_khk_F",
			"B_ViperLightHarness_oli_F"*/
			"gm_gc_army_backpack_80_assaultpack_empty_str",
			"gm_gc_backpack_r105m_brn",
			"gm_ge_army_backpack_80_oli",
			"gm_ge_army_backpack_medic_80_oli",
			"gm_ge_backpack_satchel_80_blk",
			"gm_ge_backpack_satchel_80_san",
			"gm_ge_army_backpack_90_flk",
			"gm_ge_army_backpack_90_cover_win",
			"gm_ge_army_backpack_90_trp",
			"gm_ge_army_backpack_90_blk",
			"gm_ge_army_backpack_90_oli",
			"gm_ge_backpack_sem35_oli",
			"gm_pl_army_backpack_80_oli",
			"gm_dk_army_backpack_73_oli"
		};
	};

	class Ammunition
	{
		name = "Ammunition";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\CargoMag_ca.paa";
		items[] =
		{
			/*"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag_Tracer",
			"10Rnd_127x54_Mag",
			"10Rnd_338_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"11Rnd_45ACP_Mag",
			//"130Rnd_338_Mag", SPMG
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box_Tracer",
			//"150Rnd_93x64_Mag", // NAVID
			"16Rnd_9x21_Mag",
			"200Rnd_65x39_cased_Box",
			"200Rnd_65x39_cased_Box_Tracer",
			"20Rnd_556x45_UW_mag",
			"20Rnd_762x51_Mag",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01_tracer_green",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Red",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green_mag_Tracer",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag_Tracer",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Yellow_Mag",
			"30Rnd_9x21_Green_Mag",
			"30Rnd_9x21_Red_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_Mag",
			"6Rnd_45ACP_Cylinder",
			"6Rnd_GreenSignal_F",
			"6Rnd_RedSignal_F",
			"7Rnd_408_Mag",
			"9Rnd_45ACP_Mag",*/
			"Exile_Magazine_30Rnd_762x39_AK",
			"Exile_Magazine_30Rnd_545x39_AK_Green",
			"Exile_Magazine_30Rnd_545x39_AK_Red",
			"Exile_Magazine_30Rnd_545x39_AK_White",
			"Exile_Magazine_30Rnd_545x39_AK_Yellow",
			"Exile_Magazine_45Rnd_545x39_RPK_Green",
			"Exile_Magazine_75Rnd_545x39_RPK_Green",
			"Exile_Magazine_20Rnd_762x51_DMR",
			"Exile_Magazine_20Rnd_762x51_DMR_Yellow",
			"Exile_Magazine_20Rnd_762x51_DMR_Red",
			"Exile_Magazine_20Rnd_762x51_DMR_Green",
			"Exile_Magazine_10Rnd_303",
			"Exile_Magazine_100Rnd_762x54_PK_Green",
			"Exile_Magazine_7Rnd_45ACP",
			"Exile_Magazine_8Rnd_9x18",
			"Exile_Magazine_30Rnd_545x39_AK",
			"Exile_Magazine_6Rnd_45ACP",
			"Exile_Magazine_5Rnd_22LR",
			"Exile_Magazine_10Rnd_762x54",
			"Exile_Magazine_10Rnd_9x39",
			"Exile_Magazine_20Rnd_9x39",
			"Exile_Magazine_8Rnd_74Pellets",
			"Exile_Magazine_8Rnd_74Slug",
			/*
			//Apex
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Red",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Yellow",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_Tracer_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_Tracer_F",
			"20Rnd_650x39_Cased_Mag_F",
			"10Rnd_50BW_Mag_F",
			"150Rnd_556x45_Drum_Mag_F",
			"150Rnd_556x45_Drum_Mag_Tracer_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_Green_F",
			"30Rnd_762x39_Mag_Tracer_F",
			"30Rnd_762x39_Mag_Tracer_Green_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_Green_F",
			"30Rnd_545x39_Mag_Tracer_F",
			"30Rnd_545x39_Mag_Tracer_Green_F",
			"200Rnd_556x45_Box_F",
			"200Rnd_556x45_Box_Red_F",
			"200Rnd_556x45_Box_Tracer_F",
			"200Rnd_556x45_Box_Tracer_Red_F",
			"10Rnd_9x21_Mag",*/
			"Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag",
			"Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag",
			"Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag",
			"Exile_Magazine_7Rnd_408_Bullet_Cam_Mag",
			"Exile_Magazine_10Rnd_338_Bullet_Cam_Mag",
			"Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag",
			"Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag",
			"Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag",
			"Exile_Magazine_10Rnd_765x17_SA61",
			"Exile_Magazine_20Rnd_765x17_SA61",
			"Exile_Magazine_10Rnd_127x99_m107",
			"Exile_Magazine_5Rnd_127x108_APDS_KSVK",
			"Exile_Magazine_5Rnd_127x108_KSVK",
			//gm ammunition
			//primaryMagazines
			"gm_100Rnd_762x51mm_B_T_DM21_mg8_oli",
			"gm_100Rnd_762x51mm_B_T_DM21A1_mg8_oli",
			"gm_100Rnd_762x51mm_B_T_DM21A2_mg8_oli",
			"gm_100Rnd_762x54mm_API_b32_pk_grn",
			"gm_100Rnd_762x54mm_B_T_t46_pk_grn",
			"gm_100Rnd_762x54mmR_API_7bz3_pk_grn",
			"gm_100Rnd_762x54mmR_B_T_7t2_pk_grn",
			"gm_10Rnd_762x51mm_AP_DM151_g3_blk",
			"gm_10Rnd_762x51mm_B_DM111_g3_blk",
			"gm_10Rnd_762x51mm_B_DM41_g3_blk",
			"gm_10Rnd_762x51mm_B_T_DM21_g3_blk",
			"gm_10Rnd_762x51mm_B_T_DM21A1_g3_blk",
			"gm_10Rnd_762x51mm_B_T_DM21A2_g3_blk",
			"gm_10Rnd_762x54mmR_AP_7N1_svd_blk",
			"gm_10Rnd_762x54mmR_API_7bz3_svd_blk",
			"gm_10Rnd_762x54mmR_B_T_7t2_svd_blk",
			"gm_120Rnd_762x51mm_B_T_DM21_mg3_grn",
			"gm_120Rnd_762x51mm_B_T_DM21A1_mg3_grn",
			"gm_120Rnd_762x51mm_B_T_DM21A2_mg3_grn",
			"gm_1rnd_67mm_heat_dm22a1_g3",
			"gm_20Rnd_556x45mm_B_M193_stanag_gry",
			"gm_20Rnd_556x45mm_B_M855_stanag_gry",
			"gm_20Rnd_556x45mm_B_T_M196_stanag_gry",
			"gm_20Rnd_556x45mm_B_T_M856_stanag_gry",
			"gm_20Rnd_762x51mm_AP_DM151_g3_blk",
			"gm_20Rnd_762x51mm_ap_DM151_g3_des",
			"gm_20Rnd_762x51mm_AP_DM151_sg542_blk",
			"gm_20Rnd_762x51mm_B_DM111_g3_blk",
			"gm_20Rnd_762x51mm_b_DM111_g3_des",
			"gm_20Rnd_762x51mm_B_DM111_sg542_blk",
			"gm_20Rnd_762x51mm_B_DM41_g3_blk",
			"gm_20Rnd_762x51mm_b_DM41_g3_des",
			"gm_20Rnd_762x51mm_B_DM41_sg542_blk",
			"gm_20Rnd_762x51mm_B_T_DM21_g3_blk",
			"gm_20Rnd_762x51mm_b_t_DM21_g3_des",
			"gm_20Rnd_762x51mm_B_T_DM21_g3_gold",
			"gm_20Rnd_762x51mm_B_T_DM21_sg542_blk",
			"gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk",
			"gm_20Rnd_762x51mm_b_t_DM21A1_g3_des",
			"gm_20Rnd_762x51mm_B_T_DM21A1_sg542_blk",
			"gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk",
			"gm_20Rnd_762x51mm_b_t_DM21A2_g3_des",
			"gm_20Rnd_762x51mm_B_T_DM21A2_sg542_blk",
			"gm_30Rnd_545x39mm_B_7N6_ak74_blk",
			"gm_30Rnd_545x39mm_B_7N6_ak74_org",
			"gm_30Rnd_545x39mm_B_7N6_ak74_prp",
			"gm_30Rnd_545x39mm_B_T_7T3_ak74_blk",
			"gm_30Rnd_545x39mm_B_T_7T3_ak74_org",
			"gm_30Rnd_545x39mm_B_T_7T3_ak74_prp",
			"gm_30Rnd_556x45mm_B_DM11_g36_blk",
			"gm_30Rnd_556x45mm_b_dm11_g36_des",
			"gm_30Rnd_556x45mm_B_DM11_hk33_blk",
			"gm_30Rnd_556x45mm_B_DM11_sg550_brn",
			"gm_30Rnd_556x45mm_B_M193_stanag_gry",
			"gm_30Rnd_556x45mm_B_M855_stanag_gry",
			"gm_30Rnd_556x45mm_B_T_DM21_g36_blk",
			"gm_30Rnd_556x45mm_b_t_dm21_g36_des",
			"gm_30Rnd_556x45mm_B_T_DM21_hk33_blk",
			"gm_30Rnd_556x45mm_B_T_DM21_sg550_brn",
			"gm_30Rnd_556x45mm_B_T_M196_stanag_gry",
			"gm_30Rnd_556x45mm_B_T_M856_stanag_gry",
			"gm_30Rnd_762x39mm_AP_7N23_ak47_blk",
			"gm_30Rnd_762x39mm_AP_7N23_akm_blk",
			"gm_30Rnd_762x39mm_AP_7N23_akm_org",
			"gm_30Rnd_762x39mm_AP_7N23_mpikm_blk",
			"gm_30Rnd_762x39mm_B_57N231_ak47_blk",
			"gm_30Rnd_762x39mm_B_57N231_akm_blk",
			"gm_30Rnd_762x39mm_B_57N231_akm_org",
			"gm_30Rnd_762x39mm_B_57N231_mpikm_blk",
			"gm_30Rnd_762x39mm_B_M43_ak47_blk",
			"gm_30Rnd_762x39mm_B_T_57N231P_ak47_blk",
			"gm_30Rnd_762x39mm_B_T_57N231P_akm_blk",
			"gm_30Rnd_762x39mm_B_T_57N231P_akm_org",
			"gm_30Rnd_762x39mm_B_T_57N231P_mpikm_blk",
			"gm_30Rnd_762x39mm_B_T_M43_ak47_blk",
			"gm_30Rnd_762x39mm_BSD_57N231U_ak47_blk",
			"gm_30Rnd_762x39mm_BSD_57N231U_akm_blk",
			"gm_30Rnd_762x39mm_BSD_57N231U_akm_org",
			"gm_30Rnd_762x39mm_BSD_57N231U_mpikm_blk",
			"gm_30Rnd_9x19mm_AP_DM91_mp5_blk",
			"gm_30Rnd_9x19mm_AP_DM91_mp5a3_blk",
			"gm_30Rnd_9x19mm_B_DM11_mp5_blk",
			"gm_30Rnd_9x19mm_B_DM11_mp5a3_blk",
			"gm_30Rnd_9x19mm_B_DM51_mp5_blk",
			"gm_30Rnd_9x19mm_B_DM51_mp5a3_blk",
			"gm_30Rnd_9x19mm_BSD_DM81_mp5_blk",
			"gm_30Rnd_9x19mm_BSD_DM81_mp5a3_blk",
			"gm_32Rnd_9x19mm_AP_DM91_mp2_blk",
			"gm_32Rnd_9x19mm_B_DM11_mp2_blk",
			"gm_32Rnd_9x19mm_B_DM51_mp2_blk",
			"gm_40Rnd_556x45mm_B_DM11_hk33_blk",
			"gm_40Rnd_556x45mm_B_T_DM21_hk33_blk",
			"gm_40Rnd_762x51mm_AP_DM151_g3_blk",
			"gm_40Rnd_762x51mm_B_DM111_g3_blk",
			"gm_40Rnd_762x51mm_B_DM41_g3_blk",
			"gm_40Rnd_762x51mm_B_T_DM21_g3_blk",
			"gm_40Rnd_762x51mm_B_T_DM21A1_g3_blk",
			"gm_40Rnd_762x51mm_B_T_DM21A2_g3_blk",
			"gm_45Rnd_545x39mm_B_7N6_ak74_blk",
			"gm_45Rnd_545x39mm_B_7N6_ak74_org",	
			"gm_45Rnd_545x39mm_B_7N6_ak74_prp",	
			"gm_45Rnd_545x39mm_B_T_7T3_ak74_blk",
			"gm_45Rnd_545x39mm_B_T_7T3_ak74_org",
			"gm_45Rnd_545x39mm_B_T_7T3_ak74_prp",
			"gm_50Rnd_473x33mm_B_DM11_g11_blk",
			"gm_50Rnd_473x33mm_B_T_DM21_g11_blk",
			"gm_5Rnd_762x51mm_AP_DM151_g3_blk",
			"gm_5Rnd_762x51mm_B_DM111_g3_blk",
			"gm_5Rnd_762x51mm_B_DM41_g3_blk",
			"gm_5Rnd_762x51mm_B_T_DM21_g3_blk",
			"gm_5Rnd_762x51mm_B_T_DM21A1_g3_blk",
			"gm_5Rnd_762x51mm_B_T_DM21A2_g3_blk",
			"gm_60Rnd_556x45mm_B_DM11_hk33_blk",
			"gm_60Rnd_556x45mm_B_T_DM21_hk33_blk",
			"gm_60Rnd_9x19mm_AP_DM91_mp5a3_blk",
			"gm_60Rnd_9x19mm_B_DM11_mp5a3_blk",
			"gm_60Rnd_9x19mm_B_DM51_mp5a3_blk",
			"gm_60Rnd_9x19mm_BSD_DM81_mp5a3_blk",
			"gm_75Rnd_762x39mm_AP_7N23_ak47_blk",
			"gm_75Rnd_762x39mm_AP_7N23_mpikm_blk",
			"gm_75Rnd_762x39mm_B_57N231_ak47_blk",
			"gm_75Rnd_762x39mm_B_57N231_mpikm_blk",
			"gm_75Rnd_762x39mm_B_M43_ak47_blk",
			"gm_75Rnd_762x39mm_B_T_57N231P_ak47_blk",
			"gm_75Rnd_762x39mm_B_T_57N231P_mpikm_blk",
			"gm_75Rnd_762x39mm_B_T_M43_ak47_blk",
			"gm_75Rnd_762x39mm_BSD_57N231U_ak47_blk",
			"gm_75Rnd_762x39mm_BSD_57N231U_mpikm_blk",
			"gm_7rnd_12ga_hk512_pellet",
			"gm_7rnd_12ga_hk512_slug",
			//launcherMags
			"gm_1Rnd_2650mm_potato_dm11",
			"gm_1Rnd_40mm_heat_pg7v_rpg7",
			"gm_1Rnd_40mm_heat_pg7vl_rpg7",
			"gm_1Rnd_44x537mm_heat_dm32_pzf44_2",
			"gm_1Rnd_60mm_heat_dm12_pzf3",
			"gm_1Rnd_60mm_heat_dm22_pzf3",
			"gm_1Rnd_60mm_heat_dm32_pzf3",
			"gm_1Rnd_64mm_heat_pg18",
			"gm_1Rnd_66mm_heat_m72a3",
			"gm_1Rnd_70mm_he_m585_fim43",
			"gm_1Rnd_72mm_he_9m32m",
			"gm_1Rnd_84x245mm_heat_t_DM12_carlgustaf",
			"gm_1Rnd_84x245mm_heat_t_DM12a1_carlgustaf",
			"gm_1Rnd_84x245mm_heat_t_DM22_carlgustaf",
			"gm_1Rnd_84x245mm_heat_t_DM32_carlgustaf",
			"gm_1Rnd_84x245mm_ILLUM_DM16_carlgustaf"
		};
	};

	class Flares
	{
		name = "Flares";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Chemlight_blue",
			"Chemlight_green",
			"Chemlight_red",
			"FlareGreen_F",
			"FlareRed_F",
			"FlareWhite_F",
			"FlareYellow_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareWhite_F",
			"UGL_FlareYellow_F",
			"3Rnd_UGL_FlareGreen_F",
			"3Rnd_UGL_FlareRed_F",
			"3Rnd_UGL_FlareWhite_F",
			"3Rnd_UGL_FlareYellow_F",
			//gm flares
			"gm_1Rnd_265mm_flare_multi_grn_DM21",
			"gm_1Rnd_265mm_flare_multi_nbc_DM47",
			"gm_1Rnd_265mm_flare_multi_red_DM23",
			"gm_1Rnd_265mm_flare_multi_red_gc",
			"gm_1Rnd_265mm_flare_multi_wht_DM25",
			"gm_1Rnd_265mm_flare_multi_yel_DM20",
			"gm_1Rnd_265mm_flare_para_yel_DM16",
			"gm_1Rnd_265mm_flare_single_grn_DM11",
			"gm_1Rnd_265mm_flare_single_grn_gc",
			"gm_1Rnd_265mm_flare_single_red_DM13",
			"gm_1Rnd_265mm_flare_single_red_gc",
			"gm_1Rnd_265mm_flare_single_wht_DM15",
			"gm_1Rnd_265mm_flare_single_wht_gc",
			"gm_1Rnd_265mm_flare_single_yel_DM10"
		};
	};

	class Smokes
	{
		name = "Smokes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellGreen",
			"SmokeShellOrange",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShellYellow",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell"
		};
	};

	class Explosives
	{
		name = "Explosives";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargothrow_ca.paa";
		items[] =
		{
			/*"HandGrenade",
			"MiniGrenade",
			"B_IR_Grenade",
			"O_IR_Grenade",
			"I_IR_Grenade",
			"1Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"APERSBoundingMine_Range_Mag",
			"APERSMine_Range_Mag",
			"APERSTripMine_Wire_Mag",
			"ClaymoreDirectionalMine_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"IEDLandBig_Remote_Mag",
			"IEDLandSmall_Remote_Mag",
			"IEDUrbanBig_Remote_Mag",
			"IEDUrbanSmall_Remote_Mag",
			"SatchelCharge_Remote_Mag",
			"SLAMDirectionalMine_Wire_Mag",*/
			//put magazine
			"gm_mine_at_dm21",
			"gm_mine_at_tm46",
			"gm_mine_ap_dm31",
			"gm_explosive_petn_charge",
			"gm_explosive_plnp_charge",
			"gm_mine_at_mn111",
			//grenades
			"gm_handgrenade_frag_dm41",
			"gm_handgrenade_frag_dm41a1",
			"gm_handgrenade_frag_dm51",
			"gm_handgrenade_frag_dm51a1",
			"gm_handgrenade_pracfrag_dm58", 
			"gm_handgrenade_conc_dm51",
			"gm_handgrenade_conc_dm51a1",
			"gm_handgrenade_pracconc_dm58",
			"gm_handgrenade_frag_m26",
			"gm_handgrenade_frag_m26a1",
			"gm_handgrenade_frag_rgd5",
			"gm_smokeshell_grn_dm21",
			"gm_smokeshell_red_dm23",
			"gm_smokeshell_yel_dm26",
			"gm_smokeshell_org_dm32",
			"gm_smokeshell_wht_dm25",
			"gm_smokeshell_grn_gc",
			"gm_smokeshell_blk_gc",
			"gm_smokeshell_red_gc",
			"gm_smokeshell_yel_gc",
			"gm_smokeshell_blu_gc",
			"gm_smokeshell_org_gc",
			"gm_smokeshell_wht_gc"
		};
	};

	class Pistols
	{
		name = "Pistols";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";
		items[] =
		{
			/*"hgun_ACPC2_F",
			"hgun_P07_F",
			"hgun_Pistol_heavy_01_F",
			"hgun_Pistol_heavy_02_F",
			"hgun_Pistol_Signal_F",
			"hgun_Rook40_F",
			//Apex
			"hgun_Pistol_01_F",
			"hgun_P07_khk_F",*/
			"Exile_Weapon_Colt1911",
			"Exile_Weapon_Makarov",
			"Exile_Weapon_Taurus",
			"Exile_Weapon_TaurusGold",
			"Exile_Weapon_SA61",
			"gm_pm63_handgun_blk",
			"gm_lp1_blk",
			"gm_p1_blk",
			"gm_p1sd_blk",
			"gm_p210_blk",
			"gm_m49_blk",
			"gm_p2a1_blk",
			"gm_wz78_blk",
			"gm_pm_blk",
			"gm_pim_blk",
			"gm_pimb_blk"
			
		};
	};

	class SubMachineGuns
	{
		name = "Sub Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			/*"hgun_PDW2000_F",
			"SMG_01_F",
			"SMG_02_F",
			"SMG_05_F"*/
			"gm_mp5a2_blk",
			"gm_mp5a3_blk",
			"gm_mp5a4_blk",
			"gm_mp5a5_blk",
			"gm_mp5n_blk",
			"gm_mp5sd2_blk",
			"gm_mp5sd3_blk",
			"gm_mp5sd5_blk",
			"gm_mp5sd6_blk",
			"gm_mp5nsd1_blk",
			"gm_mp5nsd2_blk",
			"gm_pm63_blk"
		};
	};

	class LightMachineGuns
	{
		name = "Light Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			/*"arifle_MX_SW_Black_F",
			"arifle_MX_SW_F",
			"LMG_Mk200_F",
			"LMG_Zafir_F",
			"LMG_03_F",
			"Exile_Weapon_RPK",
			"Exile_Weapon_PK",
			"Exile_Weapon_PKP"*/

			/*
			"MMG_01_hex_F",
			"MMG_01_tan_F",
			"MMG_02_black_F",
			"MMG_02_camo_F",
			"MMG_02_sand_F"
			*/
		};
	};

	class AssaultRifles
	{
		name = "Assault Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			/*"arifle_Katiba_C_F",
			"arifle_Katiba_F",
			"arifle_Katiba_GL_F",
			"arifle_Mk20_F",
			"arifle_Mk20_GL_F",
			"arifle_Mk20_GL_plain_F",
			"arifle_Mk20_plain_F",
			"arifle_Mk20C_F",
			"arifle_Mk20C_plain_F",
			"arifle_MX_Black_F",
			"arifle_MX_F",
			"arifle_MX_GL_Black_F",
			"arifle_MX_GL_F",
			"arifle_MXC_Black_F",
			"arifle_MXC_F",
			"arifle_SDAR_F",
			"arifle_TRG20_F",
			"arifle_TRG21_F",
			"arifle_TRG21_GL_F",*/
			"Exile_Weapon_AK107",
			"Exile_Weapon_AK107_GL",
			"Exile_Weapon_AK74",
			"Exile_Weapon_AK74_GL",
			"Exile_Weapon_AK47",
			"Exile_Weapon_AKS_Gold",
			//Apex
			/*"arifle_AK12_F",
			"arifle_AK12_GL_F",
			"arifle_AKM_F",
			"arifle_AKM_FL_F",
			"arifle_AKS_F",
			"arifle_ARX_blk_F",
			"arifle_ARX_ghex_F",
			"arifle_ARX_hex_F",
			"arifle_CTAR_blk_F",
			"arifle_CTAR_hex_F",
			"arifle_CTAR_ghex_F",
			"arifle_CTAR_GL_blk_F",
			"arifle_CTARS_blk_F",
			"arifle_CTARS_hex_F",
			"arifle_CTARS_ghex_F",
			"arifle_SPAR_01_blk_F",
			"arifle_SPAR_01_khk_F",
			"arifle_SPAR_01_snd_F",
			"arifle_SPAR_01_GL_blk_F",
			"arifle_SPAR_01_GL_khk_F",
			"arifle_SPAR_01_GL_snd_F",
			"arifle_SPAR_02_blk_F",
			"arifle_SPAR_02_khk_F",
			"arifle_SPAR_02_snd_F",
			"arifle_SPAR_03_blk_F",
			"arifle_SPAR_03_khk_F",
			"arifle_SPAR_03_snd_F",
			"arifle_MX_khk_F",
			"arifle_MX_GL_khk_F",
			"arifle_MXC_khk_F",
			"arifle_MXM_khk_F",
			"Exile_Weapon_M4",*/
			"Exile_Weapon_M16A4",
			"Exile_Weapon_M16A2",
			"gm_mp2a1_blk",
			"gm_akm_wud",
			"gm_akml_wud",
			"gm_akmn_wud",
			"gm_akms_wud",
			"gm_akmsl_wud",
			"gm_akmsn_wud",
			"gm_mpikm_brn",
			"gm_mpikm72_brn",
			"gm_mpikms72_brn",
			"gm_mpikms72k_brn",
			"gm_mpikms72ksd_brn",
			"gm_lmgk500_brn",
			"gm_lmgk500s_brn",
			"gm_mpikm72_blk",
			"gm_mpikms72_blk",
			"gm_mpikms72k_blk",
			"gm_mpikms72ksd_blk",
			"gm_lmgk500_blk",
			"gm_lmgk500s_blk",
			"gm_mpikm72_prp",
			"gm_mpikms72_prp",
			"gm_mpikms72k_prp",
			"gm_mpikms72ksd_prp",
			"gm_lmgk500_prp",
			"gm_lmgk500s_prp",
			"gm_akm_pallad_wud",
			"gm_rpk_wud",
			"gm_rpkn_wud",
			"gm_lmgrpk_brn",
			"gm_lmgrpk_prp",
			"gm_lmgrpk_blk",
			"gm_ak74n_wud",
			"gm_rpk74n_wud",
			"gm_mpiak74n_brn",
			"gm_mpiaks74n_brn",
			"gm_mpiaks74nk_brn",
			"gm_lmgrpk74n_brn",
			"gm_mpiak74n_blk",
			"gm_mpiaks74n_blk",
			"gm_mpiaks74nk_blk",
			"gm_lmgrpk74n_blk",
			"gm_mpiak74n_prp",
			"gm_mpiaks74n_prp",
			"gm_mpiaks74nk_prp",
			"gm_lmgrpk74n_prp",
			"gm_g11k2_ris_blk",
			"gm_g36a1_blk",
			"gm_g36a1_des",
			"gm_g36e_blk",
			"gm_g3a3_oli",
			"gm_g3a3_blk",
			"gm_g3a3_grn",
			"gm_gvm75_oli",
			"gm_gvm75_blk",
			"gm_gvm75_grn",
			"gm_g3a3_des",
			"gm_g3a3a0_oli",
			"gm_g3a3a0_blk",
			"gm_g3a3a0_grn",
			"gm_g3a3a0_gold",
			"gm_g3a3a1_oli",
			"gm_g3a3a1_blk",
			"gm_g3a3a1_grn",
			"gm_g3a3a1_ris_oli",
			"gm_g3a3a1_ris_blk",
			"gm_g3a3a1_ris_grn",
			"gm_g3a3_dmr_oli",
			"gm_g3a3_dmr_blk",
			"gm_g3a3_dmr_grn",
			"gm_g3a3_dmr_des",
			"gm_g3a4_oli",
			"gm_g3a4_blk",
			"gm_g3a4_grn",
			"gm_gvm75carb_oli",
			"gm_gvm75carb_blk",
			"gm_gvm75carb_grn",
			"gm_g3a4_des",
			"gm_g3a4a0_oli",
			"gm_g3a4a0_blk",
			"gm_g3a4a0_grn",
			"gm_g3a4a1_oli",
			"gm_g3a4a1_blk",
			"gm_g3a4a1_grn",
			"gm_g3a4a1_ris_oli",
			"gm_g3a4a1_ris_blk",
			"gm_g3a4a1_ris_grn",
			"gm_g3a4_ebr_oli",
			"gm_g3a4_ebr_blk",
			"gm_g3a4_ebr_grn",
			"gm_g3a4_ebr_des",
			"gm_g3ka4_oli",
			"gm_g3ka4_blk",
			"gm_g3ka4_grn",
			"gm_g3ka4a1_oli",
			"gm_g3ka4a1_blk",
			"gm_g3ka4a1_grn",
			"gm_g3ka4a1_ris_blk",
			"gm_hk33a2_blk",
			"gm_hk33a2a1_blk",
			"gm_hk33a3_blk",
			"gm_hk33a3a1_blk",
			"gm_hk33ka2_blk",
			"gm_hk33ka2a1_blk",
			"gm_hk33ka3_blk",
			"gm_hk33ka3a1_blk",
			"gm_hk512_wud",
			"gm_hk512_ris_wud",
			"gm_m16a1_blk",
			"gm_m16a2_blk",
			"gm_c7a1_blk",
			"gm_c7a1_oli",
			"gm_gvm95_blk",
			"gm_sg550_oli",
			"gm_sg550_blk",
			"gm_sg550_grn",
			"gm_sg550_pnk",
			"gm_sg550_ris_oli",
			"gm_sg550_ris_blk",
			"gm_sg550_ris_grn",
			"gm_sg550_ris_pnk",
			"gm_sg551_oli",
			"gm_sg551_blk",
			"gm_sg551_grn",
			"gm_sg551_pnk",
			"gm_sg551_ris_oli",
			"gm_sg551_ris_blk",
			"gm_sg551_ris_grn",
			"gm_sg551_ris_pnk",
			"gm_sg551_swat_blk",
			"gm_sg542_oli",
			"gm_sg542_blk",
			"gm_sg542_ris_oli",
			"gm_sg542_ris_blk",
			"gm_hk53a2_blk",
			"gm_hk53a3_blk"
		};
	};

	class Shotguns
	{
		name = "Shotguns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Weapon_M1014"
		};
	};

	class SniperRifles
	{
		name = "Sniper Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			/*"arifle_MXM_Black_F",
			"arifle_MXM_F",
			"srifle_DMR_01_F",
			"srifle_DMR_02_camo_F",
			"srifle_DMR_02_F",
			"srifle_DMR_02_sniper_F",
			"srifle_DMR_03_F",
			"srifle_DMR_03_khaki_F",
			"srifle_DMR_03_multicam_F",
			"srifle_DMR_03_tan_F",
			"srifle_DMR_03_woodland_F",
			"srifle_DMR_04_F",
			"srifle_DMR_04_Tan_F",
			"srifle_DMR_05_blk_F",
			"srifle_DMR_05_hex_F",
			"srifle_DMR_05_tan_f",
			"srifle_DMR_06_camo_F",
			"srifle_DMR_06_olive_F",
			"srifle_EBR_F",
			"srifle_GM6_camo_F",
			"srifle_GM6_F",
			"srifle_LRR_camo_F",
			"srifle_LRR_F", 
			//Apex
			"srifle_LRR_tna_F",
			"srifle_GM6_ghex_F",
			"srifle_DMR_07_blk_F",
			"srifle_DMR_07_hex_F",
			"srifle_DMR_07_ghex_F",*/
			"Exile_Weapon_CZ550",
			"Exile_Weapon_SVD",
			"Exile_Weapon_SVDCamo",
			"Exile_Weapon_VSSVintorez",
			"Exile_Weapon_DMR",
			"Exile_Weapon_LeeEnfield",
			"Exile_Weapon_m107",
			"Exile_Weapon_ksvk",
			"gm_msg90_blk",
			"gm_msg90a1_blk",
			"gm_psg1_blk",
			"gm_svd_wud"	
		};
	};

	class Bikes
	{
		name = "Bikes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Bike_OldBike",
			"Exile_Bike_MountainBike"
		};
	};

	class Cars
	{
		name = "Cars";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Car_Kart_Black",
			"Exile_Bike_QuadBike_Black",
			"Exile_Car_OldTractor_Red",
			"Exile_Car_TowTractor_White",
			"Exile_Car_Tractor_Red",
			"Exile_Car_UAZ_Green",
			"Exile_Car_UAZ_Open_Green",
			"Exile_Car_Octavius_White",
			"Exile_Car_Golf_Red",
			"Exile_Car_LandRover_Green",
			"Exile_Car_LandRover_Ambulance_Green",
			"Exile_Car_Lada_Green",
			"Exile_Car_Volha_White",
			"Exile_Car_Hatchback_Rusty1",
			"Exile_Car_Hatchback_Rusty2",
			"Exile_Car_Hatchback_Rusty3",
			"Exile_Car_Hatchback_Sport_Red",
			"Exile_Car_SUV_Red",
			"Exile_Car_SUVXL_Black",
			"Exile_Car_SUV_Armed_Black",
			"Exile_Car_Offroad_Rusty1",
			"Exile_Car_Offroad_Rusty2",
			"Exile_Car_Offroad_Rusty3",
			"Exile_Car_Offroad_Repair_Civillian",
			"Exile_Car_Offroad_Armed_Guerilla01",
			"Exile_Car_BRDM2_HQ",
			"Exile_Car_BTR40_MG_Green",
			"Exile_Car_BTR40_Green",
			"Exile_Car_HMMWV_M134_Green",
			"Exile_Car_HMMWV_M2_Green",
			"Exile_Car_HMMWV_MEV_Green",
			"Exile_Car_HMMWV_UNA_Green",
			"Exile_Car_Strider",
			"Exile_Car_Hunter",
			"Exile_Car_Ifrit",
			"Exile_Car_ProwlerLight",
			"Exile_Car_ProwlerUnarmed",
			"Exile_Car_QilinUnarmed",
			"Exile_Car_MB4WD",
			"Exile_Car_MB4WDOpen",
			"gm_ge_bgs_w123_cargo",
			"gm_ge_bgs_w253_cargo",
			"gm_dk_army_typ1200_cargo",
			"gm_dk_army_typ247_cargo",
			"gm_dk_army_typ253_cargo",
			"gm_dk_army_typ253_mp",
			"gm_dk_army_u1300l_container",
			//West Germany
			"gm_ge_army_bicycle_01_oli",
			"gm_ge_army_fuchsa0_command",
			"gm_ge_army_fuchsa0_engineer",
			"gm_ge_army_fuchsa0_reconnaissance",
			"gm_ge_army_iltis_cargo",
			"gm_ge_army_iltis_mg3",
			"gm_ge_army_iltis_milan",
			"gm_ge_army_k125",
			"gm_ge_army_kat1_451_cargo",
			"gm_ge_army_kat1_451_container",
			"gm_ge_army_kat1_451_reammo",
			"gm_ge_army_kat1_451_refuel",
			"gm_ge_army_kat1_452_container",
			"gm_ge_army_kat1_454_cargo",
			"gm_ge_army_kat1_454_reammo",
			"gm_ge_army_kat1_463_mlrs",
			"gm_ge_army_luchsa1",
			"gm_ge_army_luchsa2",
			"gm_ge_army_typ1200_cargo",
			"gm_ge_army_typ247_cargo",
			"gm_ge_army_typ247_firefighter",
			"gm_ge_army_typ253_cargo",
			"gm_ge_army_typ253_mp",
			"gm_ge_army_u1300l_cargo",
			"gm_ge_army_u1300l_container",
			"gm_ge_army_u1300l_firefighter",
			"gm_ge_army_u1300l_medic",
			"gm_ge_army_u1300l_repair",
			"gm_ge_army_w123_cargo",
			"gm_ge_bgs_bicycle_01_grn",
			"gm_ge_bgs_k125",
			"gm_ge_bgs_typ253_cargo",
			//East Germany
			"gm_gc_army_bicycle_01_oli",
			"gm_gc_army_brdm2",
			"gm_gc_army_brdm2rkh",
			"gm_gc_army_brdm2um",
			"gm_gc_army_btr60pa",
			"gm_gc_army_btr60pa_dshkm",
			"gm_gc_army_btr60pb",
			"gm_gc_army_btr60pu12",
			"gm_gc_army_p601",
			"gm_gc_army_uaz469_cargo",
			"gm_gc_army_uaz469_dshkm",
			"gm_gc_army_uaz469_spg9",
			"gm_gc_army_ural375d_cargo",
			"gm_gc_army_ural375d_medic",
			"gm_gc_army_ural375d_mlrs",
			"gm_gc_army_ural375d_refuel",
			"gm_gc_army_ural4320_cargo",
			"gm_gc_army_ural4320_reammo",
			"gm_gc_army_ural4320_repair",
			"gm_gc_army_ural44202",
			"gm_gc_bgs_p601",
			"gm_gc_bgs_uaz469_cargo",
			"gm_gc_bgs_uaz469_spg9",
			"gm_gc_bgs_ural375d_medic",
			"gm_gc_bgs_ural375d_refuel",
			"gm_gc_bgs_ural4320_cargo",
			"gm_gc_bgs_ural4320_reammo",
			"gm_gc_bgs_ural4320_repair",
			//Poland
			"gm_pl_army_brdm2",
			"gm_pl_army_ot64",
			"gm_pl_army_uaz469_cargo",
			"gm_pl_army_uaz469_dshkm",
			"gm_pl_army_ural375d_medic",
			"gm_pl_army_ural375d_mlrs",
			"gm_pl_army_ural375d_refuel",
			"gm_pl_army_ural4320_cargo",
			"gm_pl_army_ural4320_reammo",
			"gm_pl_army_ural4320_repair",
			//Civilians
			"gm_gc_civ_p601",
			"gm_gc_civ_ural375d_cargo",
			"gm_gc_dp_p601",
			"gm_gc_ff_p601",
			"gm_gc_pol_p601",
			"gm_ge_civ_typ1200",
			"gm_ge_civ_typ247",
			"gm_ge_civ_typ251",
			"gm_ge_civ_typ253",
			"gm_ge_civ_u1300l",
			"gm_ge_civ_w123",
			"gm_ge_dbp_bicycle_01_ylw",
			"gm_ge_dbp_typ1200",
			"gm_ge_dbp_typ247",
			"gm_ge_dbp_typ251",
			"gm_ge_dbp_w123",
			"gm_ge_ff_typ1200",
			"gm_ge_ff_typ247",
			"gm_ge_ff_typ247_firefighter",
			"gm_ge_ff_typ253",
			"gm_ge_ff_u1300l_firefighter",
			"gm_ge_ff_u1300l_medic",
			"gm_ge_ff_w123",
			"gm_ge_pol_bicycle_01_grn",
			"gm_ge_pol_typ1200",
			"gm_ge_pol_typ253",
			"gm_ge_pol_w123",
			"gm_ge_taxi_typ253",
			"gm_ge_taxi_w123",
			"gm_xx_civ_bicycle_01",
			//Tracked
			//Denmark
			"gm_dk_army_bibera0",
			"gm_dk_army_bpz2a0",
			"gm_dk_army_Leopard1a3",
			"gm_dk_army_m109",
			"gm_dk_army_m113a1dk_apc",
			"gm_dk_army_m113a1dk_command",
			"gm_dk_army_m113a1dk_engineer",
			"gm_dk_army_m113a1dk_medic",
			"gm_dk_army_m113a2dk",
			//West Germany
			"gm_ge_army_bibera0",
			"gm_ge_army_bpz2a0",
			"gm_ge_army_gepard1a1",
			"gm_ge_army_Leopard1a1",
			"gm_ge_army_Leopard1a1a1",
			"gm_ge_army_Leopard1a1a2",
			"gm_ge_army_Leopard1a3",
			"gm_ge_army_Leopard1a3a1",
			"gm_ge_army_Leopard1a5",
			"gm_ge_army_m109g",
			"gm_ge_army_m113a1g_apc",
			"gm_ge_army_m113a1g_apc_milan",
			"gm_ge_army_m113a1g_command",
			"gm_ge_army_m113a1g_medic",
			"gm_ge_army_marder1a1a",
			"gm_ge_army_marder1a1plus",
			"gm_ge_army_marder1a2",
			//East Germany
			"gm_gc_army_2p16",
			"gm_gc_army_2s1",
			"gm_gc_army_bmp1sp2",
			"gm_gc_army_pt76b",
			"gm_gc_army_t55",
			"gm_gc_army_t55a",
			"gm_gc_army_t55ak",
			"gm_gc_army_t55am2",
			"gm_gc_army_t55am2b",
			"gm_gc_army_zsu234v1",
			//Poland
			"gm_pl_army_2p16",
			"gm_pl_army_2s1",
			"gm_pl_army_bmp1sp2",
			"gm_pl_army_pt76b",
			"gm_pl_army_t55",
			"gm_pl_army_t55a",
			"gm_pl_army_t55ak",
			"gm_pl_army_zsu234v1"

		};
	};

	class Trucks
	{
		name = "Trucks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Car_Van_Black",
			"Exile_Car_Van_Box_Black",
			"Exile_Car_Van_Fuel_Black",
			"Exile_Car_Ural_Open_Worker",
			"Exile_Car_Ural_Covered_Worker",
			"Exile_Car_V3S_Covered",
			"Exile_Car_Zamak",
			"Exile_Car_Tempest",
			"Exile_Car_HEMMT",
			"Exile_Car_Ikarus_Blue"
		};
	};

	class Choppers
	{
		name = "Helicopters";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Chopper_Hummingbird_Green",
			"Exile_Chopper_Hummingbird_Civillian_Wasp",
			"Exile_Chopper_Huey_Green",
			"Exile_Chopper_Huey_Armed_Green",
			"Exile_Chopper_Taru_Black",
			"Exile_Chopper_Taru_Covered_Black",
			"Exile_Chopper_Taru_Transport_Black",
			"Exile_Chopper_Orca_BlackCustom",
			"Exile_Chopper_Mohawk_FIA",
			"Exile_Chopper_Huron_Black",
			"Exile_Chopper_Hellcat_Green",
			//Air
			//West Germany
			"gm_ge_airforce_do28d2",
			"gm_ge_airforce_do28d2_medevac",
			"gm_ge_army_bo105m_vbh",
			"gm_ge_army_bo105p1m_vb",
			"gm_ge_army_bo105p1m_vbh_swooper",
			"gm_ge_army_bo105p_pah1",
			"gm_ge_army_bo105p_pah1a1",
			"gm_ge_army_ch53g",
			"gm_ge_army_ch53gs",
			"gm_ge_bgs_bo105m_vbh",
			//East Germany
			"gm_gc_airforce_l410s_salon",
			"gm_gc_airforce_l410t",
			"gm_gc_airforce_mi2p",
			"gm_gc_airforce_mi2sr",
			"gm_gc_airforce_mi2t",
			"gm_gc_airforce_mi2urn",
			"gm_gc_airforce_mi2us",
			"gm_gc_bgs_mi2p",
			"gm_gc_bgs_mi2us",
			//Poland
			"gm_pl_airforce_mi2ch",
			"gm_pl_airforce_mi2p",
			"gm_pl_airforce_mi2platan",
			"gm_pl_airforce_mi2sr",
			"gm_pl_airforce_mi2t",
			"gm_pl_airforce_mi2urn",
			"gm_pl_airforce_mi2urp",
			"gm_pl_airforce_mi2urpg",
			"gm_pl_airforce_mi2urs",
			"gm_pl_airforce_mi2us",
			//Civilians
			"gm_gc_civ_l410s_passenger",
			"gm_gc_civ_l410s_salon",
			"gm_gc_civ_mi2p",
			"gm_gc_civ_mi2r",
			"gm_gc_civ_mi2sr",
			"gm_ge_adak_bo105m_vbh",
			"gm_ge_pol_bo105m_vbh"
		};
	};

	class Boats
	{
		name = "Boats";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Boat_RubberDuck_CSAT",
			"Exile_Boat_RubberDuck_Digital",
			"Exile_Boat_RubberDuck_Orange",
			"Exile_Boat_RubberDuck_Blue",
			"Exile_Boat_RubberDuck_Black",
			"Exile_Boat_MotorBoat_Police",
			"Exile_Boat_MotorBoat_Orange",
			"Exile_Boat_MotorBoat_White",
			"Exile_Boat_SDV_CSAT",
			"Exile_Boat_SDV_Digital",
			"Exile_Boat_SDV_Grey",
			"Exile_Boat_WaterScooter",
			"Exile_Boat_RHIB"
		};
	};

	class Planes
	{
		name = "Planes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			//Air
		//West Germany
		"gm_ge_airforce_do28d2",
		"gm_ge_airforce_do28d2_medevac",
		"gm_ge_army_bo105m_vbh",
		"gm_ge_army_bo105p1m_vb",
		"gm_ge_army_bo105p1m_vbh_swooper",
		"gm_ge_army_bo105p_pah1",
		"gm_ge_army_bo105p_pah1a1",
		"gm_ge_army_ch53g",
		"gm_ge_army_ch53gs",
		"gm_ge_bgs_bo105m_vbh",
		//East Germany
		"gm_gc_airforce_l410s_salon",
		"gm_gc_airforce_l410t",
		"gm_gc_airforce_mi2p",
		"gm_gc_airforce_mi2sr",
		"gm_gc_airforce_mi2t",
		"gm_gc_airforce_mi2urn",
		"gm_gc_airforce_mi2us",
		"gm_gc_bgs_mi2p",
		"gm_gc_bgs_mi2us",
		//Poland
		"gm_pl_airforce_mi2ch",
		"gm_pl_airforce_mi2p",
		"gm_pl_airforce_mi2platan",
		"gm_pl_airforce_mi2sr",
		"gm_pl_airforce_mi2t",
		"gm_pl_airforce_mi2urn",
		"gm_pl_airforce_mi2urp",
		"gm_pl_airforce_mi2urpg",
		"gm_pl_airforce_mi2urs",
		"gm_pl_airforce_mi2us",
		//Civilians
		"gm_gc_civ_l410s_passenger",
		"gm_gc_civ_l410s_salon",
		"gm_gc_civ_mi2p",
		"gm_gc_civ_mi2r",
		"gm_gc_civ_mi2sr",
		"gm_ge_adak_bo105m_vbh",
		"gm_ge_pol_bo105m_vbh"
		};
	};

	class Diving
	{
		name = "Diving";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"G_B_Diving",
			"G_O_Diving",
			"G_I_Diving",
			"V_RebreatherB",
			"V_RebreatherIA",
			"V_RebreatherIR",
			"U_I_Wetsuit",
			"U_O_Wetsuit",
			"U_B_Wetsuit"
		};
	};
	
    class ExtendedBaseMod
	{
		name = "ExtendedBaseMod";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
		"Land_HBarrier_1_F_Kit",
		"Land_HBarrier_3_F_Kit",
		"Land_HBarrier_5_F_Kit",
		"Land_BagBunker_Tower_F_Kit",
		//"CamoNet_OPFOR_open_F_Kit",Removed
		//"CamoNet_INDP_open_F_Kit",Removed
		//"CamoNet_BLUFOR_open_F_Kit",Removed
		///////////////////////// V0.0.2
		"Land_CncBarrier_F_Kit",
		"Land_Stone_4m_F_Kit",
		"Land_Stone_Gate_F_Kit",
		"PierLadder_F_Kit",
		"Land_WaterCooler_01_new_F_Kit",
		///////////////////////// V0.0.3
		"Land_Pallet_MilBoxes_F_Kit",
		"Land_Cargo20_military_green_F_Kit",
		"Land_BagFence_Corner_F_Kit",
		"Land_BagFence_Long_F_Kit",
		"Land_HBarrierTower_F_Kit",
		"Land_Metal_wooden_rack_F_Kit",
		"Land_BagBunker_Small_F_Kit",
		"Land_Bunker_F_Kit",
		"Land_HBarrierWall_corner_F_Kit",
		"Land_HBarrierWall6_F_Kit",
		"Land_HBarrierWall4_F_Kit",
		"Land_RampConcrete_F_Kit",
		///////////////////////// V0.0.4
		"Land_Wall_IndCnc_4_F_Kit",
		"Land_City2_4m_F_Kit",
		"Land_City2_8m_F_Kit",
		"Land_HelipadCivil_F_Kit",
		"Land_Rack_F_Kit",
		///////////////////////// V0.1.0
		"Land_City_Gate_F_Kit",
		"Land_BarGate_F_Kit",
		"Land_Icebox_F_Kit",
		"Land_Sign_WarningMilitaryArea_F_Kit",
		"Land_Mil_WallBig_4m_F_Kit",
		"Land_Cargo_Patrol_V2_F_Kit",
		///////////////////////// V0.1.1
		"Land_Pier_small_F_Kit",
		"Land_Wall_Tin_4_Kit",
		///////////////////////// V0.1.2
		"Land_Tank_rust_F_Kit",
		"Land_ShelvesMetal_F_Kit",
		"Land_Cargo_Tower_V2_F_Kit",
		"Land_FuelStation_Feed_F_Kit",
		"Land_BagBunker_Large_F_Kit",
		"ShootingPos_F_Kit",
		///////////////////////// V0.1.3
		"Land_cargo_house_slum_F_Kit",
		"Land_Cargo40_light_green_F_Kit",
		"Land_Cargo_House_V2_F_Kit",
		"Land_LampHalogen_F_Kit",
		///////////////////////// V0.1.4
		"Land_LampAirport_F_Kit",
		"Land_CncShelter_F_Kit",
		"Land_Wall_IndCnc_2deco_F_Kit",
		"Land_CncWall4_F_Kit",
		"Land_FuelStation_Shed_F_Kit",
		"Land_Shed_Small_F_Kit",
		"Land_Razorwire_F_Kit",
		///////////////////////// V0.1.5
		"Land_u_Addon_01_V1_F_Kit", //brokenshed
		"Land_Cargo20_sand_F_Kit",
		"Land_GH_Stairs_F_Kit",
		"Land_i_Garage_V2_F_Kit",
		"Land_GH_Platform_F_Kit",
		"Land_TentDome_F_Kit",
		"Land_TentHangar_V1_F_Kit",
		///////////////////////// V0.1.6
		"Land_CncWall1_F_Kit",
		"Land_CncBarrierMedium_F_Kit",
		"Land_Crash_barrier_F_Kit",
		"Land_Shed_Big_F_Kit",
		"Land_TouristShelter_01_F_Kit",
		"Land_Water_source_F_Kit",
		"Land_Sign_WarningMilitaryVehicles_F_Kit",
		"Land_Sign_WarningMilAreaSmall_F_Kit",
		"Land_Concrete_SmallWall_8m_F_Kit",
		"Land_Concrete_SmallWall_4m_F_Kit",
		///////////////////////// V0.1.7
		"Land_PortableLight_double_F_Kit",
		"Land_Radar_Small_F_Kit",
		"Land_Cargo_addon02_V2_F_Kit", //Slumplane
		"Land_TableDesk_F_Kit",
		"Land_ToiletBox_F_Kit",
		//"Land_Pier_Box_F_Kit",//  Removed!
		///////////////////////// V0.1.8
		"Land_ChairWood_F_Kit",
		"BlockConcrete_F_Kit",
		"Land_CargoBox_V1_F_Kit",
		"Land_IndFnc_3_F_Kit",
		"Land_IndFnc_9_F_Kit",
		"Land_Sea_Wall_F_Kit",
		"Land_i_Addon_03_V1_F_Kit",
		"Land_i_Addon_03mid_V1_F_Kit",
		"Land_LampStreet_F_Kit",
		///////////////////////// V0.1.9
		"Land_Dome_Big_F_Kit",
		"Land_Hangar_F_Kit",
		"Land_Metal_Shed_F_Kit",
		"Land_spp_Tower_F_Kit",
		"Land_Sun_chair_F_Kit",
		"Land_Sunshade_04_F_Kit",
		"Land_LampShabby_F_Kit",
		///////////////////////// V0.2.0
		"Land_Airport_Tower_F_Kit",
		"Land_i_Barracks_V1_F_Kit",
		"Land_BeachBooth_01_F_Kit",
		"Land_Castle_01_tower_F_Kit",
		"Land_Sign_WarningUnexplodedAmmo_F_Kit",
		"Land_TTowerSmall_1_F_Kit",
		///////////////////////// V0.2.1 Hotfix
		///////////////////////// V0.2.2
		"Exile_Plant_GreenBush_Kit",
		//"Land_nav_pier_m_F_Kit",// Removed
		"Land_SharpStone_01_F_Kit",
		"Land_SharpStone_02_F_Kit",
		"Land_Sleeping_bag_F_Kit",
		"Land_Small_Stone_02_F_Kit",
		"Land_SolarPanel_2_F_Kit",
		"Land_spp_Panel_F_Kit",
		///////////////////////// V0.2.3
		"Land_CampingChair_V2_F_Kit",
		"Land_CampingChair_V1_F_Kit",
		"Land_Camping_Light_F_Kit",
		"Land_CampingTable_F_Kit",
		"MapBoard_altis_F_Kit",
		"Land_Pavement_narrow_F_Kit",
		"Land_Pavement_narrow_corner_F_Kit",
		"Land_Pavement_wide_F_Kit",
		"Land_Pavement_wide_corner_F_Kit",
		///////////////////////// V0.2.4
		"Exile_ConcreteMixer_Kit",
		"Flag_CSAT_F_Kit",
		"Land_GarbageContainer_closed_F_Kit",
		"Land_Metal_rack_F_Kit",
		"Land_Sink_F_Kit",
		///////////////////////// V0.2.5
		//"Land_Atm_02_F_Kit",
		///////////////////////// V0.2.6
		
		"Land_Airport_01_hangar_F_Kit",//V0.2.8
		"Land_Ammobox_rounds_F_Kit",//V0.2.8
		"Land_BagBunker_01_small_green_F_Kit",
		"Land_Bagbunker_01_large_green_F_Kit",//V0.2.8
		"Land_Bagfence_01_long_green_F_Kit",//V0.2.8
		"Land_Bagfence_01_short_green_F_Kit",//V0.2.8
		"Land_HBarrier_01_big_tower_green_F_Kit",//V0.2.8
		"Land_HBarrier_01_line_3_green_F_Kit",
		"Land_HBarrier_01_line_5_green_F_Kit",
		"Land_HBarrier_01_tower_green_F_Kit", //name changed
		"Land_IRMaskingCover_01_F_Kit",//V0.2.8
		"Land_IRMaskingCover_02_F_Kit",//V0.2.8
		/*
		"Land_Airport_01_controlTower_F_Kit",
		"Land_BasaltWall_01_4m_F_Kit",//V0.2.8
		"Land_BasaltWall_01_8m_F_Kit",//V0.2.8
		"Land_BasaltWall_01_gate_F_Kit",//V0.2.8
		"Land_Breakwater_01_F_Kit",//V0.2.8
		"Land_Breakwater_02_F_Kit",//V0.2.8
		"Land_GarageShelter_01_F_Kit", //V0.2.7
		"Land_PetroglyphWall_01_F_Kit",//V0.2.8
		"Land_PetroglyphWall_02_F_Kit",//V0.2.8
		"Land_PillboxBunker_01_big_F_Kit",
		"Land_PillboxBunker_01_hex_F_Kit",
		"Land_PillboxBunker_01_rectangle_F_Kit",
		"Land_PillboxWall_01_3m_F_Kit",
		"Land_PillboxWall_01_6m_F_Kit",
		"Land_trench_01_forest_F_Kit",
		"Land_trench_01_grass_F_Kit",
		*/
		
		///////////////////////// V0.2.7
		"Land_i_House_Small_03_V1_F_Kit",//Bungalow
		"Land_i_House_Big_01_V2_F_Kit",
		"Land_PlasticCase_01_medium_F_Kit",
		"Land_Research_HQ_F_Kit",
		"Land_Research_house_V1_F_Kit",
		///////////////////////// V0.2.8 - Some Apex buildings
		"Land_Suitcase_F_Kit",
		"B_Slingload_01_fuel_F_Kit",
		"B_Slingload_01_Ammo_F_Kit",
		///////////////////////// V0.3.1
		"Land_FlatTV_01_F_Kit",
		"Land_ChairPlastic_F_Kit",
		"Land_GamingSet_01_console_F_Kit",
		"Land_GamingSet_01_controller_F_Kit",
		"Land_GymBench_01_F_Kit",
		"Land_GymRack_03_F_Kit",
		"Land_OfficeCabinet_01_F_Kit",
		"Land_OfficeChair_01_F_Kit",
		"Land_PCSet_01_case_F_Kit",
		"Land_PCSet_01_keyboard_F_Kit",
		"Land_PCSet_01_mouse_F_Kit",
		"Land_PCSet_01_screen_F_Kit",
		"Land_Printer_01_F_Kit",
		"Land_RattanChair_01_F_Kit",
		"Land_RattanTable_01_F_Kit",
		"Land_Sleeping_bag_blue_F_Kit",
		"Land_Sleeping_bag_brown_F_Kit",
		"Land_Trophy_01_bronze_F_Kit",
		"Land_Trophy_01_gold_F_Kit",
		"Land_Trophy_01_silver_F_Kit",
		"Land_Sun_chair_green_F_Kit",
		"Land_Sunshade_01_F_Kit",
		"Land_Sunshade_02_F_Kit",
		"Land_Sunshade_03_F_Kit",
		"Land_Sunshade_F_Kit",
		"Land_TablePlastic_01_F_Kit",
		"Land_WoodenTable_large_F_Kit",
		"Land_WoodenTable_small_F_Kit",
		"OfficeTable_01_new_F_Kit",
		"Land_DieselGroundPowerUnit_01_F_Kit",
		"Land_EngineCrane_01_F_Kit",
		"Land_PalletTrolley_01_yellow_F_Kit",
		"Land_PressureWasher_01_F_Kit",
		"Land_WeldingTrolley_01_F_Kit",
		"Land_Workbench_01_F_Kit",
		"ArrowDesk_L_F_Kit",
		"ArrowDesk_R_F_Kit",
		"PlasticBarrier_02_grey_F_Kit",
		"PlasticBarrier_02_yellow_F_Kit",
		"PlasticBarrier_03_blue_F_Kit",
		"PlasticBarrier_03_orange_F_Kit",
		"RoadBarrier_F_Kit",
		"RoadBarrier_small_F_Kit",
		"RoadCone_F_Kit",
		"RoadCone_L_F_Kit",
		"TapeSign_F_Kit",
		"Land_Target_Dueling_01_F_Kit",
		"TargetP_Inf_F_Kit",
		"Fridge_01_closed_F_Kit",
		"Land_MetalCase_01_large_F_Kit",
		"Land_Microwave_01_F_Kit",
		"Land_ShelvesWooden_F_Kit",
		"Land_ShelvesWooden_blue_F_Kit",
		"Land_ShelvesWooden_khaki_F_Kit",
		"Land_ToolTrolley_01_F_Kit",
		"Land_ToolTrolley_02_F_Kit",
		"Land_Sign_Mines_F_Kit",
		"Land_PortableHelipadLight_01_F_Kit",
		"PortableHelipadLight_01_blue_F_Kit",
		"PortableHelipadLight_01_green_F_Kit",
		"PortableHelipadLight_01_red_F_Kit",
		"PortableHelipadLight_01_white_F_Kit",
		"PortableHelipadLight_01_yellow_F_Kit",
		"Land_GamingSet_01_powerSupply_F_Kit",
		"Land_GamingSet_01_camera_F_Kit",
		"WaterPump_01_forest_F_Kit",
		"WaterPump_01_sand_F_Kit",
		"Land_TripodScreen_01_large_F_Kit",
		"Land_TripodScreen_01_dual_v2_F_Kit",
		"Land_TripodScreen_01_dual_v1_F_Kit",
		"TargetP_Inf_Acc2_F_Kit",
		"TargetBootcampHuman_F_Kit",
		"Target_F_Kit",
		"Land_SatelliteAntenna_01_F_Kit",
		"Land_Projector_01_F_Kit",
		"Land_PortableGenerator_01_F_Kit",
		"Land_Obstacle_Ramp_F_Kit",
		"MetalBarrel_burning_F_Kit",
		///////////////////////// V0.3.2
		"EBM_Brickwall_window_Kit",
		"EBM_Brickwall_stairs_Kit",
		"EBM_Brickwall_floorport_door_Kit",
		"EBM_Brickwall_floorport_Kit",
		"EBM_Brickwall_floor_Kit",
		"EBM_Brickwall_door_Kit",
		"EBM_Brickwall_hole_Kit",
		"EBM_Helipad_Kit",
		"EBM_Airhook_Kit",
		"EBM_Parksign_Kit",
		"EBM_Brickwall_Kit",
		///////////////////////// V0.3.3
		/*"EBM_Metalwall_window_Kit",
		"EBM_Metalwall_stairs_Kit",
		"EBM_Metalwall_floorport_door_Kit",
		"EBM_Metalwall_floorport_Kit",
		"EBM_Metalwall_floor_Kit",
		"EBM_Metalwall_door_Kit",
		"EBM_Metalwall_hole_Kit",
		"EBM_Metalwall_half_Kit",
		"EBM_Metalwall_Kit",*/
		"EBM_Medikit_Kit",
		"EBM_pollard_Kit",
		"EBM_ATM_Kit"
		};
	};
};

class CfgTraders
{
	/**
	 * Weapons, scopes, silencers, ammo
	 */
	class Exile_Trader_Armory
	{
		name = "ARMORY";
		showWeaponFilter = 1;
		categories[] = 
		{
			"PointerAttachments",
			"BipodAttachments",
			"MuzzleAttachments",
			"OpticAttachments",
			"Ammunition",
			"Pistols",
			"Shotguns",
			"SubMachineGuns",
			"LightMachineGuns",
			"AssaultRifles",
			"SniperRifles"
		};
	};

	/**
	 * Satchels, nades, UAVs, static MGs
	 */
	class Exile_Trader_SpecialOperations
	{
		name = "SPECIAL OPERATIONS";
		showWeaponFilter = 1; // for noob tubes
		categories[] = 
		{
			"Flares",
			"Smokes",
			"UAVs",
			"StaticMGs",
			"Explosives",
			"Navigation"
		};
	};

	/**
	 * Uniforms, vests, helmets, backpacks
	 */
	class Exile_Trader_Equipment
	{	
		name = "EQUIPMENT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Headgear",
			"Glasses",
			"Uniforms",
			"Vests",
			"Backpacks",
			"FirstAid"
		};
	};

	/**
	 * Cans, cans, cans
	 */
	class Exile_Trader_Food
	{
		name = "FAST FOOD";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Food",
			"Drinks",
			"NonVeganFood"
		};
	};

	/**
	 * Light bulbs, metal, etc.
	 */
	class Exile_Trader_Hardware
	{
		name = "HARDWARE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Hardware",
			"Tools",
			"ExtendedBaseMod"
		};
	};

	/**
	 * Sells cars and general vehicles
	 */
	class Exile_Trader_Vehicle
	{
		name = "VEHICLE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Cars",
			"Trucks"
		};
	};

	/**
	 * Sells choppers and planes
	 */
	class Exile_Trader_Aircraft
	{
		name = "AIRCRAFT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Choppers", 
			"Planes"
		};
	};

	/**
	 * Sells ships and boats
	 */ 
	class Exile_Trader_Boat
	{
		name = "BOAT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Boats"
		};
	};

	class Exile_Trader_Diving
	{
		name = "DIVERS";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Diving"
		};
	};

	/**
	 * Sells Community Items
	 */ 
	class Exile_Trader_CommunityCustoms
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community"
		};
	};

	class Exile_Trader_CommunityCustoms2
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community2"
		};
	};

	class Exile_Trader_CommunityCustoms3
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community3"
		};
	};

	class Exile_Trader_CommunityCustoms4
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community4"
		};
	};

	class Exile_Trader_CommunityCustoms5
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community5"
		};
	};

	class Exile_Trader_CommunityCustoms6
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community6"
		};
	};

	class Exile_Trader_CommunityCustoms7
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community7"
		};
	};

	class Exile_Trader_CommunityCustoms8
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community8"
		};
	};

	class Exile_Trader_CommunityCustoms9
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community9"
		};
	};

	class Exile_Trader_CommunityCustoms10
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community10"
		};
	};
};
class CfgTrading 
{
	/*
	* This factor defines the difference between sales/purchase price of
	* items and vehicles. It is used if there is no sales price defined
	* in CfgExileArsenal. 
	*/
	sellPriceFactor = 0.5;
	
	rekeyPriceFactor = 0.1;

	class requiredRespect 
	{
		Level1 = 0;
		Level2 = 5000;
		Level3 = 10000;
		Level4 = 15000;
		Level5 = 20000;
		Level6 = 25000;
	};
};
class CfgVehicleCustoms
{
	///////////////////////////////////////////////////////////////////////////////
	// QUAD BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_QuadBike_Abstract
	{
		skins[] =
		{

			{"Exile_Bike_QuadBike_Blue",		100, "Blue",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLUE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLUE_CO.paa"}},
			{"Exile_Bike_QuadBike_Red",			100, "Red",			{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_RED_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVRED_CO.paa"}},
			{"Exile_Bike_QuadBike_White",		100, "White",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_WHITE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVWHITE_CO.paa"}},
			{"Exile_Bike_QuadBike_Nato",		150, "NATO",		{"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_co.paa"}},
			{"Exile_Bike_QuadBike_Csat",		150, "CSAT",		{"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_OPFOR_CO.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_OPFOR_CO.paa"}},
			{"Exile_Bike_QuadBike_Fia",			150, "FIA",			{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_INDP_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_INDP_CO.paa"}},
			{"Exile_Bike_QuadBike_Guerilla01",	150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_IG_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_IG_CO.paa"}},
			{"Exile_Bike_QuadBike_Guerilla02",	150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_INDP_Hunter_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_INDP_Hunter_CO.paa"}},
			{"Exile_Bike_QuadBike_Black",		100, "Black",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"}},
			{"Exile_Bike_QuadBike_Black",		100, "Hex",		{"\A3\Soft_f_Exp\Quadbike_01\data\Quadbike_01_ghex_CO.paa","\A3\Soft_f_Exp\Quadbike_01\data\Quadbike_01_wheel_ghex_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// MOTOR BOATS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_MotorBoat_Abstract
	{
		skins[] =
		{
			{"Exile_Boat_MotorBoat_Police",		350, "Police", {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_police_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_police_co.paa"}},
			{"Exile_Boat_MotorBoat_Orange",		300, "Orange", {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_rescue_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_rescue_co.paa"}},
			{"Exile_Boat_MotorBoat_White",		300, "White",  {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// RUBBER DUCKS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_RubberDuck_Abstract
	{
		skins[] =
		{
			{"Exile_Boat_RubberDuck_CSAT",		200, "CSAT", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_OPFOR_CO.paa"}},
			{"Exile_Boat_RubberDuck_Digital",	200, "Digital",{"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_INDP_CO.paa"}},
			{"Exile_Boat_RubberDuck_Orange",	150, "Orange", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_rescue_CO.paa"}},
			{"Exile_Boat_RubberDuck_Blue",		150, "Blue", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_civilian_CO.paa"}},
			{"Exile_Boat_RubberDuck_Black",		150, "Black", {"\A3\boat_F\Boat_Transport_01\data\boat_transport_01_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SDV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_SDV_Abstract
	{
		skins[] =
		{
			{"Exile_Boat_SDV_CSAT",		200, "CSAT", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_opfor_CO.paa"}},
			{"Exile_Boat_SDV_Digital",	200, "Digital", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_INDP_CO.paa"}},
			{"Exile_Boat_SDV_Grey",		100, "Grey", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hellcat
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hellcat_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Hellcat_Green", 350, "Green", 	{"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"}},
			{"Exile_Chopper_Hellcat_FIA", 	500, "FIA", 	{"\A3\Air_F_EPB\Heli_Light_03\data\heli_light_03_base_indp_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Karts
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Kart_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Kart_BluKing", 				100, "Bluking", 	{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_blu_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_RedStone", 			100, "RedStone", 	{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_Vrana", 				100, "Vrana", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_vrana_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_vrana_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_Green", 				100, "Green", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_green_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_Blue", 				100, "Blue", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_blue_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_Orange", 				100, "Orange",		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_orange_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_White", 				100, "White", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_white_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_Yellow", 				100, "Yellow", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_yellow_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_Black", 				100, "Black", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird (Civillian)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Hummingbird_Civillian_Blue", 		350, "Blue", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Red", 		350, "Red", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_ION", 		350, "ION", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_BlueLine", 	350, "BlueLine", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueLine_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Digital", 	350, "Digital", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Elliptical", 	350, "Elliptical", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Furious", 	350, "Furious", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_GrayWatcher", 350, "GrayWatcher",	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_graywatcher_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Jeans", 		350, "Jeans", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Light", 		350, "Light", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_light_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Shadow", 		350, "Shadow", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_shadow_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Sheriff", 	350, "Sheriff", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Speedy", 		350, "Speedy", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Sunset", 		350, "Sunset", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Vrana", 		350, "Vrana", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Wasp", 		350, "Wasp", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wasp_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Wave", 		350, "Wave", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Huron
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huron_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Huron_Black", 	450, "Black", {"\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"}},
			{"Exile_Chopper_Huron_Green", 	450, "Green", {"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Orca
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Orca_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Orca_CSAT", 		350, "CSAT", 			{"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa"}},
			{"Exile_Chopper_Orca_Black", 		350, "Black", 			{"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"}},
			{"Exile_Chopper_Orca_BlackCustom", 	350, "Black Custom", 	{"\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Taru_CSAT",		500, "CSAT", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"}},
			{"Exile_Chopper_Taru_Black",	500, "BLACK", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Transport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Transport_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Taru_Transport_CSAT",	500, "CSAT", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"}},
			{"Exile_Chopper_Taru_Transport_Black",	500, "Black", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Covered_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Taru_Covered_CSAT",		500, "CSAT",	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_CO.paa"}},
			{"Exile_Chopper_Taru_Covered_Black",	500, "Black",	{"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext02_black_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Hatchback_Rusty1", 			50, "Rusty White",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_01_co.paa"}},
			{"Exile_Car_Hatchback_Rusty2", 			50, "Rusty Red",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_02_co.paa"}},
			{"Exile_Car_Hatchback_Rusty3", 			50, "Rusty Yellow",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_03_co.paa"}},
			{"Exile_Car_Hatchback_Beige", 			100, "Beige",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE01_CO.paa"}},
			{"Exile_Car_Hatchback_Green", 			100, "Green",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE02_CO.paa"}},
			{"Exile_Car_Hatchback_Blue", 			100, "Blue",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE03_CO.paa"}},
			{"Exile_Car_Hatchback_BlueCustom", 		100, "Blue Custom",		{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE04_CO.paa"}},
			{"Exile_Car_Hatchback_BeigeCustom", 	100, "Beige Custom",	{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE05_CO.paa"}},
			{"Exile_Car_Hatchback_Yellow", 			100, "Yellow",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE06_CO.paa"}},
			{"Exile_Car_Hatchback_Grey", 			100, "Grey",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE07_CO.paa"}},
			{"Exile_Car_Hatchback_Black", 			100, "Black",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE08_CO.paa"}},
			{"Exile_Car_Hatchback_Dark", 			100, "Dark",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE09_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback (Sport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Sport_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Hatchback_Sport_Red", 		100, "Red",		{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT01_CO.paa"}},
			{"Exile_Car_Hatchback_Sport_Blue", 		100, "Blue",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT02_CO.paa"}},
			{"Exile_Car_Hatchback_Sport_Orange", 	100, "Orange",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT03_CO.paa"}},
			{"Exile_Car_Hatchback_Sport_White", 	100, "White",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT04_CO.paa"}},
			{"Exile_Car_Hatchback_Sport_Beige", 	100, "Beige",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT05_CO.paa"}},
			{"Exile_Car_Hatchback_Sport_Green", 	100, "Green",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT06_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Offroad_Rusty1", 		50, "Rusty White",	{"\exile_assets\model\RTV\Exile_offroad_03_co.paa","\exile_assets\model\RTV\Exile_offroad_03_co.paa"}},
			{"Exile_Car_Offroad_Rusty2", 		50, "Rusty Red",	{"\exile_assets\model\RTV\Exile_offroad_01_co.paa","\exile_assets\model\RTV\Exile_offroad_01_co.paa"}},
			{"Exile_Car_Offroad_Rusty3", 		50, "Rusty Blue",	{"\exile_assets\model\RTV\Exile_offroad_02_co.paa","\exile_assets\model\RTV\Exile_offroad_02_co.paa"}},
			{"Exile_Car_Offroad_Red", 			500, "Red",			{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"}},
			{"Exile_Car_Offroad_Beige", 		500, "Beige",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"}},
			{"Exile_Car_Offroad_White", 		500, "White",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"}},
			{"Exile_Car_Offroad_Blue", 			500, "Blue",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"}},
			{"Exile_Car_Offroad_DarkRed", 		500, "Dark Red",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"}},
			{"Exile_Car_Offroad_BlueCustom", 	500, "Blue Custom",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla01", 	700, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla02", 	700, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla03", 	700, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla04", 	700, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla05", 	700, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla06", 	700, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla07", 	700, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla08", 	700, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla09", 	700, "Guerilla 09",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla10", 	700, "Guerilla 10",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla11", 	700, "Guerilla 11",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla12", 	700, "Guerilla 12",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"}},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Black", {"exile_assets\texture\vehicle\Exile_Offroad_Black_co.paa"}},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Light Blue", {"exile_assets\texture\vehicle\Exile_Offroad_LightBlue_co.paa"}},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Orange",{"exile_assets\texture\vehicle\Exile_Offroad_Orange_co.paa"}},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Pink",	{"exile_assets\texture\vehicle\Exile_Offroad_Pink_co.paa"}},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile White",	{"exile_assets\texture\vehicle\Exile_Offroad_White_co.paa"}},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Yellow",{"exile_assets\texture\vehicle\Exile_Offroad_Yellow_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Abstract
	{
		skins[] =
		{
			{"Exile_Car_LandRover_Red", 250, "Red", {"Exile_psycho_LRC\data\r_lr_base_co.paa","Exile_psycho_LRC\data\r_lr_special_co.paa"}},
			{"Exile_Car_LandRover_Urban", 250, "Urban", {"Exile_psycho_LRC\data\textures\lr_base_urbancamo_co.paa","Exile_psycho_LRC\data\textures\lr_special_urbancamo_co.paa"}},
			{"Exile_Car_LandRover_Green", 250, "Green", {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"}},
			{"Exile_Car_LandRover_Sand", 250, "Sand", {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"}},
			{"Exile_Car_LandRover_Desert", 250, "Desert", {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover (Ambulance)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Ambulance_Abstract
	{
		skins[] =
		{
			{"Exile_Car_LandRover_Ambulance_Green", 250, "Green", {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"}},
			{"Exile_Car_LandRover_Ambulance_Desert", 250, "Desert", {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"}},
			{"Exile_Car_LandRover_Ambulance_Sand", 250, "Sand", {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Octavius
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Octavius_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Octavius_White", 250, "White", {"exile_psycho_Octavia\Data\car_body_co.paa"}},
			{"Exile_Car_Octavius_Black", 250, "Black", {"exile_psycho_Octavia\Data\car_body_bl_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// UH-1H Huey
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huey_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Huey_Green", 700, "Green", {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"}},
			{"Exile_Chopper_Huey_Desert", 700, "Desert", {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// UH-1H Huey (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huey_Armed_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Huey_Armed_Green", 700, "Green", {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"}},
			{"Exile_Chopper_Huey_Armed_Desert", 700, "Desert", {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Armed_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Offroad_Armed_Guerilla01",	250, "Guerilla 01", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla02",	250, "Guerilla 02", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla03",	250, "Guerilla 03", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla04",	250, "Guerilla 04", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla05",	250, "Guerilla 05", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla06",	250, "Guerilla 06", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla07",	250, "Guerilla 07", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla08",	250, "Guerilla 08", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla09",	250, "Guerilla 09", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla10",	250, "Guerilla 10", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla11",	250, "Guerilla 11", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla12",	250, "Guerilla 12", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Repair)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Repair_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Offroad_Repair_Civillian",		150, "Civillian",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Red",			150, "Red",			{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Beige",			150, "Beige",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"}},
			{"Exile_Car_Offroad_Repair_White",			150, "White",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Blue",			150, "Blue",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"}},
			{"Exile_Car_Offroad_Repair_DarkRed",		150, "DarkRed",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"}},
			{"Exile_Car_Offroad_Repair_BlueCustom",		150, "BlueCustom",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla01",		250, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla02",		250, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla03",		250, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla04",		250, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla05",		250, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla06",		250, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla07",		250, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla08",		250, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla09",		250, "Guerilla 09",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla10",		250, "Guerilla 10",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla11",		250, "Guerilla 11",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla12",		250, "Guerilla 12",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SUV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Abstract
	{
		skins[] =
		{
			{"Exile_Car_SUV_Red", 		100, "Red",					{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_CO.paa"}},
			{"Exile_Car_SUV_Black", 	150, "Black",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_02_CO.paa"}},
			{"Exile_Car_SUV_Grey", 		100, "Grey",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_03_CO.paa"}},
			{"Exile_Car_SUV_Orange", 	100, "Orange",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_04_CO.paa"}},
			{"Exile_Car_SUV_Black", 	150, "Snow Camo",			{"exile_assets\texture\vehicle\Exile_SUV_Snow_co.paa"}},
			{"Exile_Car_SUV_Black", 	150, "Leaf Camo",			{"exile_assets\texture\vehicle\Exile_SUV_Leaf_Light_co.paa"}},
			{"Exile_Car_SUV_Black", 	150, "Leaf Camo (Dark)",	{"exile_assets\texture\vehicle\Exile_SUV_Leaf_Dark_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SUV XL
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUVXL_Abstract
    {
        skins[] = 
        {
            {"Exile_Car_SUVXL_Black", 100, "Black", {"\Exile_psycho_SUV_a3\Data\suv_body_co.paa"}},
            {"Exile_Car_SUVXL_Black", 150, "Blue White", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_bluewhite.paa"}},
            {"Exile_Car_SUVXL_Black", 150, "Charcoal", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_charcoal_co.paa"}},
            {"Exile_Car_SUVXL_Black", 150, "Orange", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_orange_co.paa"}},
            {"Exile_Car_SUVXL_Black", 200, "Hello Kitty", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_Pink_hello_co.paa"}},
            {"Exile_Car_SUVXL_Black", 150, "Red", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_red_co.paa"}},
            {"Exile_Car_SUVXL_Black", 150, "Silver", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_silver_co.paa"}},
            {"Exile_Car_SUVXL_Black", 100, "White", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_white_co.paa"}},
            {"Exile_Car_SUVXL_Black", 150, "Yellow", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_yellow_co.paa"}}
        };
    };

	///////////////////////////////////////////////////////////////////////////////
	// Van
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Van_Black",			100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Exile_Car_Van_White",			100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Exile_Car_Van_Red",			100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Exile_Car_Van_Guerilla01",	150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"}},
			{"Exile_Car_Van_Guerilla02",	150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"}},
			{"Exile_Car_Van_Guerilla03",	150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"}},
			{"Exile_Car_Van_Guerilla04",	150, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"}},
			{"Exile_Car_Van_Guerilla05",	150, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"}},
			{"Exile_Car_Van_Guerilla06",	150, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"}},
			{"Exile_Car_Van_Guerilla07",	150, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"}},
			{"Exile_Car_Van_Guerilla08",	150, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"}},
			{"Exile_Car_Van_Black",	150, "Brown",	{"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_brn_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_2_CO.paa"}},
			{"Exile_Car_Van_Black",	150, "Olive",	{"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_oli_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_3_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Box)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Box_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Van_Box_Black",				100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Exile_Car_Van_Box_White",				100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Exile_Car_Van_Box_Red",				100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla01",		150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla02",		150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla03",		150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla04",		150, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla05",		150, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla06",		150, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla07",		150, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla08",		150, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Fuel)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Fuel_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Van_Fuel_Black",			100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"}},
			{"Exile_Car_Van_Fuel_White",			100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"}},
			{"Exile_Car_Van_Fuel_Red",				100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"}},
			{"Exile_Car_Van_Fuel_Guerilla01",		150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_01_CO.paa"}},
			{"Exile_Car_Van_Fuel_Guerilla02",		150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_02_CO.paa"}},
			{"Exile_Car_Van_Fuel_Guerilla03",		150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_03_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Tempest
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Tempest_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Tempest", 		200, "Green Hex",	{"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ikarus
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ikarus_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Ikarus_Blue", 		200, "Blue",	{"Exile_psycho_Ikarus\Data\bus_exterior_co.paa"}},
			{"Exile_Car_Ikarus_Red", 		200, "Red",		{"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"}},
			{"Exile_Car_Ikarus_Party", 		500, "Party",	{"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Open)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Open_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Ural_Open_Blue",			300, "Blue",		{"Exile_psycho_Ural\data\Ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"}},
			{"Exile_Car_Ural_Open_Yellow",			300, "Yellow",		{"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"}},
			{"Exile_Car_Ural_Open_Worker",			300, "Worker",		{"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"}},
			{"Exile_Car_Ural_Open_Military",		300, "Military",	{"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Covered_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Ural_Covered_Blue",			300, "Blue",		{"Exile_psycho_Ural\data\ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"}},
			{"Exile_Car_Ural_Covered_Yellow",		300, "Yellow",		{"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"}},
			{"Exile_Car_Ural_Covered_Worker",		300, "Worker",		{"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"}},
			{"Exile_Car_Ural_Covered_Military",		300, "Military",	{"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Lada
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Lada_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Lada_Green", 		100, "Green",	{"exile_psycho_lada\data\lada_eciv1_co.paa","exile_psycho_lada\data\Lada_glass_ECIV1_CA.paa"}},
			{"Exile_Car_Lada_Taxi", 		100, "Taxi",	{"exile_psycho_lada\data\Lada_red_CO.paa"}},
			{"Exile_Car_Lada_Red", 			100, "Red",		{"exile_psycho_lada\data\Lada_red_CO.paa"}},
			{"Exile_Car_Lada_Hipster", 		100, "Hipster",	{"exile_psycho_lada\data\lada_eciv2_co.paa","exile_psycho_lada\data\Lada_glass_ECIV2_CA.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Volha
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Volha_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Volha_Blue", 		100, "Blue",	{"Exile_psycho_Gaz_volha\data\Volha_ECIV_CO.paa"}},
			{"Exile_Car_Volha_White", 		100, "White",	{"Exile_psycho_Gaz_volha\data\Volha_Gray_ECIV_CO.paa"}},
			{"Exile_Car_Volha_Black",		100, "Black",	{"Exile_psycho_Gaz_volha\data\Volha_Black_ECIV_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// HUNTER
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hunter_Abstract
	{
		skins[] =
		{

			{"Exile_Car_Hunter",		1000, "Exile White Edition",	{"exile_assets\texture\vehicle\Exile_Hunter_Snow_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Snow_Back_co.paa"}},
			{"Exile_Car_Hunter",		1000, "Exile Hex",				{"exile_assets\texture\vehicle\Exile_Hunter_Hex_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"}},
			{"Exile_Car_Hunter",		1000, "Exile Black",			{"exile_assets\texture\vehicle\Exile_Hunter_Black_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// IFRIT
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ifrit_Abstract
	{
		skins[] =
		{

			{"Exile_Car_Ifrit",		1000, "Green Hex",	{"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_01_ghex_CO.paa","\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_02_ghex_CO.paa","\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// HMMWV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_HMMWV_M2_Abstract
	{
		skins[] =
		{

			{"Exile_Car_HMMWV_M2_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"}},
			{"Exile_Car_HMMWV_M2_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"}}
		};
	};

	class Exile_Car_HMMWV_M134_Abstract
	{
		skins[] =
		{

			{"Exile_Car_HMMWV_M134_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"}},
			{"Exile_Car_HMMWV_M134_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"}}
		};
	};

	class Exile_Car_HMMWV_MEV_Abstract
	{
		skins[] =
		{

			{"Exile_Car_HMMWV_MEV_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_cm.paa"}},
			{"Exile_Car_HMMWV_MEV_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_cm.paa"}}
		};
	};

	class Exile_Car_HMMWV_UNA_Abstract
	{
		skins[] =
		{

			{"Exile_Car_HMMWV_UNA_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"}},
			{"Exile_Car_HMMWV_UNA_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// BTR40
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_BTR40_MG_Abstract
	{
		skins[] =
		{

			{"Exile_Car_BTR40_MG_Green",		1000, "Green",	{"exile_psycho_btr40\data\btr40ext_co.paa"}},
			{"Exile_Car_BTR40_MG_Camo",			1000, "Camo",	{"exile_psycho_btr40\data\btr40extcamo_co.paa"}}
		};
	};

	class Exile_Car_BTR40_Abstract
	{
		skins[] =
		{

			{"Exile_Car_BTR40_Green",			1000, "Green",	{"exile_psycho_btr40\data\btr40ext_co.paa"}},
			{"Exile_Car_BTR40_Camo",			1000, "Camo",	{"exile_psycho_btr40\data\btr40extcamo_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Golf
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Golf_Abstract
	{
		skins[] =
		{

			{"Exile_Car_Golf_Red",				1000, "Red",	{"exile_psycho_VWGolf\data\vwgolf_body_co.paa"}},
			{"Exile_Car_Golf_Black",			1000, "Black",	{"exile_psycho_VWGolf\data\texture\black_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// AN-2
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_AN2_Abstract
	{
		skins[] =
		{
			{"Exile_Plane_AN2_Green", 700, "Green", {"Exile_psycho_An2\data\an2_1_co.paa","Exile_psycho_An2\data\an2_2_co.paa","Exile_psycho_An2\data\an2_wings_co.paa"}},
			{"Exile_Plane_AN2_White", 700, "Red, White & Blue", {"Exile_psycho_An2\data\an2_1_a_co.paa",
		"Exile_psycho_An2\data\an2_2_a_co.paa","Exile_psycho_An2\data\an2_wings_a_co.paa"}},
			{"Exile_Plane_AN2_Stripe", 700, "Green Stripe", {"Exile_psycho_An2\data\an2_1_b_co.paa","Exile_psycho_An2\data\an2_2_b_co.paa","Exile_psycho_An2\data\an2_wings_b_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// RHIB
	///////////////////////////////////////////////////////////////////////////////
	class B_G_Boat_Transport_02_F
	{
		skins[] =
		{
			{"Exile_Boat_RHIB",		150, "Blue", {"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa","\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_civilian_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Water Scooter
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_WaterScooter_Abstract
	{
		skins[] =
		{
			{"Exile_Boat_WaterScooter",		150, "Blue", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"}},
			{"Exile_Boat_WaterScooter",		150, "Grey", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"}},
			{"Exile_Boat_WaterScooter",		150, "Lime", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"}},
			{"Exile_Boat_WaterScooter",		150, "Red", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"}},
			{"Exile_Boat_WaterScooter",		150, "White", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"}},
			{"Exile_Boat_WaterScooter",		150, "Yellow", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ceasar BTT
	///////////////////////////////////////////////////////////////////////////////
	class C_Plane_Civil_01_F
	{
		skins[] =
		{
			{"Exile_Plane_Ceasar",		150, "Racing (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"}},
			{"Exile_Plane_Ceasar",		150, "Racing", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"}},
			{"Exile_Plane_Ceasar",		150, "Red Line (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"}},
			{"Exile_Plane_Ceasar",		150, "Tribal (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"}},
			{"Exile_Plane_Ceasar",		150, "Tribal", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"}},
			{"Exile_Plane_Ceasar",		150, "Blue Wave (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"}},
			{"Exile_Plane_Ceasar",		150, "Blue Wave", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// V-44 X Blackfish (Infantry Transport)
	///////////////////////////////////////////////////////////////////////////////
	class B_T_VTOL_01_infantry_F
	{
		skins[] =
		{
			{"Exile_Plane_BlackfishInfantry",		150, "Blue", {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// V-44 X Blackfish (Vehicle Transport)
	///////////////////////////////////////////////////////////////////////////////
	class B_T_VTOL_01_vehicle_F
	{
		skins[] =
		{
			{"Exile_Plane_BlackfishVehicle",		150, "Blue", {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Prowler (Light)
	///////////////////////////////////////////////////////////////////////////////
	class B_CTRG_LSV_01_light_F
	{
		skins[] =
		{
			{"Exile_Car_ProwlerLight",		150, "Black", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa"}},
			{"Exile_Car_ProwlerLight",		150, "Dazzle", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"}},
			{"Exile_Car_ProwlerLight",		150, "Sand", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Prowler (Unarmed)
	///////////////////////////////////////////////////////////////////////////////
	class B_T_LSV_01_unarmed_black_F
	{
		skins[] =
		{
			{"Exile_Car_ProwlerUnarmed",		150, "Olive", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"}},
			{"Exile_Car_ProwlerUnarmed",		150, "Dazzle", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"}},
			{"Exile_Car_ProwlerUnarmed",		150, "Sand", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Qilin (Unarmed)
	///////////////////////////////////////////////////////////////////////////////
	class O_T_LSV_02_unarmed_black_F
	{
		skins[] =
		{
			{"Exile_Car_QilinUnarmed",		150, "Arid", {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"}},
			{"Exile_Car_QilinUnarmed",		150, "Green Hex", {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// MB 4WD
	///////////////////////////////////////////////////////////////////////////////
	class C_Offroad_02_unarmed_orange_F
	{
		skins[] =
		{
			{"Exile_Car_MB4WD",		150, "Black", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"}},
			{"Exile_Car_MB4WD",		150, "Blue", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"}},
			{"Exile_Car_MB4WD",		150, "Brown", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"}},
			{"Exile_Car_MB4WD",		150, "Green", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"}},
			{"Exile_Car_MB4WD",		150, "Olive", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"}},
			{"Exile_Car_MB4WD",		150, "Red", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"}},
			{"Exile_Car_MB4WD",		150, "White", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"}}
		};
	};

	class I_C_Offroad_02_unarmed_F
	{
		skins[] =
		{
			{"Exile_Car_MB4WDOpen",		150, "Black", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "Blue", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "Brown", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "Green", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "Orange", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "Red", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "White", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "Olive", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"}}
		};
	};
};

class CfgVehicleTransport 
{
	class Exile_Container_SupplyBox
	{
		vehicles[] = {"Exile_Car_Van_Abstract", "Exile_Car_Offroad_Abstract", "Exile_Car_Zamak_Abstract", "Exile_Car_HEMMT_Abstract", "Exile_Car_Tempest_Abstract"};

		class Exile_Car_Van_Abstract
		{
			attachPosition[] = {0, -1.1, 0.2};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0, -4.4};
		};

		class Exile_Car_Offroad_Abstract
		{
			attachPosition[] = {0, -1.6, 0.4};
			cargoIndizes[] = {1, 2, 3, 4}; 
			detachPosition[] = {0, -4};
		};

		class Exile_Car_Zamak_Abstract
		{
			attachPosition[] = {0.03, 0.3, 0};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0.03, -4.8};
		};

		class Exile_Car_HEMMT_Abstract
		{
			attachPosition[] = {0.05, -0.1, 0.3};
			cargoIndizes[] = {1, 2, 8, 9}; 
			detachPosition[] = {0.05, -6.1};
		};

		class Exile_Car_Tempest_Abstract
		{
			attachPosition[] = {0.08, -0.85, 0.4};
			cargoIndizes[] = {1, 6, 7, 9}; 
			detachPosition[] = {0.08, -6};
		};
	};
};
class CfgVirtualGarage
{
	/*
		Enable or disable virtual garage on the server
		Options:
			0: Disable virtual garage
			1: Enable virtual garage
	*/
	enableVirtualGarage = 1;	
	
	/*
		Enables or disables the ability to access virtual garage while in combat
		Options:
			0: Players cannot access virtual garage while they are in combat
			1: Players can access virtual garage when they are in combat
	*/
	canAccessGarageInCombat = 0;
	
	/*
		When enabled, this will dump any items and money from the vehicle onto the ground where the car was.
		Options:
			0: Do not clear inventory and money
			1: Clear inventory and money
	*/
	clearInventoryOnStore = 1;
	
	/*
		The maximum number of vehicles that can be stored in the VG for that territory.
		Use -1 to disable the ability to store vehicles at that level.
		Make sure to have the same number of levels here as you do in CfgTerritories!
	*/
	numberOfVehicles[] = 
	{
		-1,			// Level 1
		5, 			// Level 2 
		8, 			// Level 3
		11, 		// Level 4
		13, 		// Level 5
		15, 		// Level 6
		18, 		// Level 7
		21, 		// Level 8
		25, 		// Level 9
		28 			// Level 10
	};
	
	/*
		The allowed types of vehicles that can be stored in the garage	
		Available Types: "Car", "Tank", "Plane", "Air", "Ship", "Submarine"
	*/
	allowedVehicleTypes[] = {"Car","Tank","Plane","Air","Ship","Submarine"};
};
class CfgXM8 
{
	class settings
	{
		controlID = 4070;
		appID = "App01";
		title = "Settings";
	};
	
	class healthScanner
	{
		controlID = 4120;
		appID = "App02";
		title = "Health Scanner";
	};
	
	class slothMachine
	{
		controlID = 4140;
		appID = "App03";
		title = "Sloth Machine";
	};
};
/*
	XM8 Extra apps, the Exile way of doing it
	
	Here is an example app layout:
	class XM8_App01_Button: RscExileXM8AppButton1x1
	{
	    textureNoShortcut = "";  	// Path to picture. This can be via mission file or client side PBO
	    text = "";					// The name of the app to be display on the button
	    onButtonClick = "";			// The code to fire when the app is clicked
	    resource = "";				// The name of the resource to load for the app, leave as an empty string if you just want to run code without a GUI, like BOOM or spawning a bike
	};
*/

class XM8_App01_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "\exile_assets\texture\ui\xm8_app_settings_ca.paa";
    text = "Settings";
    onButtonClick = "['settings', 0] call ExileClient_gui_xm8_slide";
    resource = "XM8SlideSettings";
};

class XM8_App02_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "\exile_assets\texture\ui\xm8_app_health_scanner_ca.paa";
    text = "Health Scanner";
    onButtonClick = "['healthScanner', 0] call ExileClient_gui_xm8_slide";
    resource = "XM8SlideHealthScanner";
};

class XM8_App03_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "\exile_assets\texture\ui\xm8_app_slothMachine_ca.paa";
    text = "Sloth Machine";
    onButtonClick = "['slothMachine', 0] call ExileClient_gui_xm8_slide";
    resource = "XM8SlideSlothMachine";
};

class XM8_App04_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "\exile_assets\texture\ui\xm8_app_boom_ca.paa";
    text = "BOOM!";
    onButtonClick = "call ExileClient_system_breaching_detonate";
    resource = "";
};

class XM8_App05_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App06_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App07_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App08_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App09_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App10_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App11_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App12_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App13_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App14_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											   BELOW IS WHERE ALL THE XM8 APP RESOURCES CAN GO
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class XM8SlideSettings: RscExileXM8Slide 
{
	idc = 4070;
	class Controls 
	{
		class GoBackButton: RscExileXM8ButtonMenu
		{
			idc = 4071;
			text = "GO BACK"; 
			x = (30 - 3) * (0.025);
			y = (19 - 2) * (0.04);
			w = 6 * (0.025);
			h = 1 * (0.04);
			onButtonClick = "['extraApps', 1] call ExileClient_gui_xm8_slide";
		};

		class 8GDropDown: RscExileXM8Combo
		{
			idc = 4072;
			x = (5 - 3) * (0.025);
			y = (5 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_on8GSelectionChanged";
		};

		class 8GLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Show my device in global 8G network."; 
			x = (13 - 3) * (0.025);
			y = (5 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class SoundDropDown: RscExileXM8Combo
		{
			idc = 4075;
			x = (5 - 3) * (0.025);
			y = (7 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onSoundSelectionChanged";
		};

		class SoundLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Play a beep sound on notifications."; 
			x = (13 - 3) * (0.025);
			y = (7 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class PartyEspDropDown: RscExileXM8Combo
		{
			idc = 4076;
			x = (5 - 3) * (0.025);
			y = (9 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onPartyEspSelectionChanged";
		};

		class PartyEspLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Color of 3D party icons and name tags."; 
			x = (13 - 3) * (0.025);
			y = (9 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class PartyEspSlider: RscExileXM8XSliderH
		{
			idc = 4078;
			x = (5 - 3) * (0.025);
			y = (11 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onSliderPosChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onPartyEspSliderChanged";
		};

		class PartyEspSliderLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Opacity of 3D party icons and name tags."; 
			x = (13 - 3) * (0.025);
			y = (11 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class PartyMarkerSlider: RscExileXM8XSliderH
		{
			idc = 4079;
			x = (5 - 3) * (0.025);
			y = (13 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onSliderPosChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onPartyMarkerSliderChanged";
		};

		class PartyMarkerSliderLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Opacity of 3D party markers."; 
			x = (13 - 3) * (0.025);
			y = (13 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class StreamModeDropDown: RscExileXM8Combo
		{
			idc = 4077;
			x = (5 - 3) * (0.025);
			y = (15 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onStreamModeSelectionChanged";
		};

		class StreamModeLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Masquerade PIN codes. Perfect for streamers."; 
			x = (13 - 3) * (0.025);
			y = (15 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};
	};
};

class XM8SlideHealthScanner: RscExileXM8Slide
{
	idc = 4120;
	class Controls 
	{
		class GoBackButton: RscExileXM8ButtonMenu
		{
			idc = 4122;
			text = "GO BACK"; 
			x = (30 - 3) * (0.025);
			y = (19 - 2) * (0.04);
			w = 6 * (0.025);
			h = 1 * (0.04);
			onButtonClick = "['extraApps', 1] call ExileClient_gui_xm8_slide";
		};

		class HealthInfoControlGroup: RscExileXM8ControlsGroupNoHScrollbars
		{
			idc = -1;
			x = (5 - 3) * (0.025);
			y = (5 - 2) * (0.04);
			w = 30 * (0.025);
			h = 15 * (0.04);
			colorBackground[] = {0,0,0,0.25};

			class controls
			{
				class HealthInfo: RscExileXM8StructuredText
				{
					idc = 4121;
					x = 0;
					y = 0;
					w = 29 * (0.025); // minus 1!
					h = 15 * (0.04);
				};
			};
		};
	};
};

class XM8SlideSlothMachine: RscExileXM8Slide
{
	idc = 4140;
	class Controls 
	{
		class Background: RscExileXM8PictureKeepAspect
		{
			idc = -1;
			text = "\exile_assets\texture\ui\slothMachine\xm8_slothMachineBackground.paa";
			x = -3.1 * (0.025) + (0);
			y = -6 * (0.04) + (0);
			w = 40 * (0.025);
			h = 33 * (0.04);
		};
		
		class XM8SlothMachineSpinButton: RscExileXM8PictureButton
		{
			idc = 4141;
			style = 0x30;
			x = 14.3 * (0.025) + (0);
			y = 15.9 * (0.04) + (0);
			w = 5.7 * (0.025);
			h = 2 * (0.04);
			text = "\exile_assets\texture\ui\slothMachine\button_off_ca.paa";
			action = "[] call ExileClient_gui_xm8_slide_slothMachine_event_onSpinButtonClick;";
		};
		
		class GoBackButton: RscExileXM8ButtonMenu
		{
			idc = 4148;
			text = "GO BACK"; 
			x = (30 - 3) * (0.025);
			y = (19 - 2) * (0.04);
			w = 6 * (0.025);
			h = 1 * (0.04);
			sizeEx = .9 * (0.04);
			onButtonClick = "['extraApps', 1] call ExileClient_gui_xm8_slide";
		};
		
		class PopTabsLabel: RscExileXM8StructuredText
		{
			idc = 4142;
			text = "<t align='center'><t color='#e14141'><img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='1' shadow='true' /></t>";
			x = 6.5 * (0.025) + (0);
			y = 13 * (0.04) + (0);
			w = 6 * (0.025);
			h = 2 * (0.04);
		};
		
		class JackpotLabel: RscExileXM8StructuredText
		{
			idc = 4143;
			text = "<t align='center'><t color='#e14141'></t>";
			x = 14 * (0.025) + (0);
			y = 13 * (0.04) + (0);
			w = 6 * (0.025);
			h = 2 * (0.04);
		};
		
		class WinningsLabel: RscExileXM8StructuredText
		{
			idc = 4144;
			text = "<t align='center'><t color='#e14141'>0</t>";
			x = 21.5 * (0.025) + (0);
			y = 13 * (0.04) + (0);
			w = 6 * (0.025);
			h = 2 * (0.04);
		};
		
		class Symbol01: RscExileXM8PictureKeepAspect
		{
			idc = 4145;
			text = "";
			x = 6.55 * (0.025) + (0);
			y = 4 * (0.04) + (0);
			w = 5.83 * (0.025);
			h = 5 * (0.04);
		};
		
		class Symbol02: RscExileXM8PictureKeepAspect
		{
			idc = 4146;
			text = "";
			x = 14.1 * (0.025) + (0);
			y = 4 * (0.04) + (0);
			w = 5.83 * (0.025);
			h = 5 * (0.04);
		};
		
		class Symbol03: RscExileXM8PictureKeepAspect
		{
			idc = 4147;
			text = "";
			x = 21.6 * (0.025) + (0);
			y = 4 * (0.04) + (0);
			w = 5.83 * (0.025);
			h = 5 * (0.04);
		};
	};
};
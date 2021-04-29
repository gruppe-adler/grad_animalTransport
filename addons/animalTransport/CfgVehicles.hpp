class CfgVehicles {
    class Animal_Base_F;
    class Sheep_random_F: Animal_Base_F {
        class ACE_Actions {
            class ACE_MainActions {
                displayName = "Interactions";
                distance = 3;
                condition = QUOTE(true);
                statement = "";
                icon = "\a3\ui_f\data\IGUI\Cfg\Actions\eject_ca.paa";
                position = "[0, 0.35, 0.65]";

                class GVAR(loadAction) {
                    displayName = "load on vehicle";
                    distance = 3;
                    condition = QUOTE([_target] call FUNC(interact_loadCondition));
                    statement = QUOTE([_target] call FUNC(interact_loadAction));
                    insertChildren = QUOTE([_target] call FUNC(interact_loadChildren));
                    icon = "\a3\ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa";
                };

            };
        };
        ACE_dragging_canCarry = 1;
        ACE_dragging_carryPosition[] = {-0.5, 0.6, 0.5};
        ACE_dragging_carryDirection = 90;
    };
};

class GRAD_AnimalTransport {
    class Animals {
        class Sheep_random_F {
            stop = "Sheep_Stop";
            default = "Sheep_Idle_Stop";
        };
    };
    class Vehicles {
        class Van_01_transport_base_F {
            unloadPoint[] = {0, -4.2, -0.6};
            unloadActionPoint[] = {0, -3.4, -0.4};
            class Sheep_random_F {
                class Spaces {
                    class FrontOuterLeft {
                        offset[] = {-0.7, -1.4, -0.6};
                        cargoIndices[] = {2, 4};
                    };
                    class FrontInnerLeft {
                        offset[] = {-0.25, -1.6, -0.6};
                        cargoIndices[] = {2, 4};
                    };
                    class FrontInnerRight {
                        offset[] = {0.2, -1.4, -0.6};
                        cargoIndices[] = {3, 5};
                    };
                    class FrontOuterRight {
                        offset[] = { 0.65, -1.6, -0.6};
                        cargoIndices[] = {3, 5};
                    };
                    class BackOuterRight {
                        offset[] = { 0.7, -3.0, -0.6};
                        cargoIndices[] = {7, 9,11};
                    };
                    class BackInnerRight {
                        offset[] = { 0.25, -2.8, -0.6};
                        cargoIndices[] = {7, 9,11};
                    };
                    class BackInnerLeft {
                        offset[] = { -0.2, -3.0, -0.6};
                        cargoIndices[] = {6, 8, 10};
                    };
                    class BackOuterLeft {
                        offset[] = { -0.65, -2.8, -0.6};
                        cargoIndices[] = {6, 8, 10};
                    };
                };
            };
        };

        class I_G_Van_01_transport_F: Van_01_transport_base_F {};

        class RHS_Ural_Civ_Base {
            unloadPoint[] = {0, -4.1, -0.2};
            unloadActionPoint[] = {0, -3.3, -0.1};
            class Sheep_random_F {
                class Spaces {
                    class FrontLeft {
                        offset[] = {-0.50, -0.70, -0.20};
                        cargoIndices[] = {13, 3, 5};
                    };
                    class FrontMiddle {
                        offset[] = {-0.05, -0.70, -0.20};
                        cargoIndices[] = {};
                    };
                    class FrontRight {
                        offset[] = {0.50, -0.70, -0.20};
                        cargoIndices[] = {12, 2, 4};
                    };
                    class CenterLeft {
                        offset[] = {-0.50, -2.10, -0.20};
                        cargoIndices[] = {5, 7, 9};
                    };
                    class CenterMiddle {
                        offset[] = {0.00, -2.20, -0.20};
                        cargoIndices[] = {};
                    };
                    class CenterRight {
                        offset[] = {0.5, -2.10, -0.20};
                        cargoIndices[] = {4, 6, 8};
                    };
                    class RearRight {
                        offset[] = {-0.4, -2.60, -0.20};
                        dir = 90;
                        cargoIndices[] = {8, 9};
                    };
                    class RearLeft {
                        offset[] = {0.4, -3.0, -0.20};
                        dir = 270;
                        cargoIndices[] = {10, 11};
                    };
                };
            };
        };
        class RHS_Ural_Open_MSV_01: RHS_Ural_Civ_Base {};

        class rhs_gaz66o_vmf {
            unloadPoint[] = {0, -3.4, -0.6};
            unloadActionPoint[] = {0, -2.6, -0.4};
            class Sheep_random_F {
                class Spaces {
                    class FrontOuterLeft {
                        offset[] = {-0.8, -0.6, -0.6};
                    };
                    class FrontInnerLeft {
                        offset[] = {-0.35, -0.75, -0.6};
                    };
                    class FrontInnerRight {
                        offset[] = {0.1, -0.6, -0.6};
                    };
                    class FrontOuterRight {
                        offset[] = { 0.55, -0.75, -0.6};
                    };
                    class BackOuterRight {
                        offset[] = { 0.55, -2.0, -0.6};
                    };
                    class BackInnerRight {
                        offset[] = { 0.25, -1.8, -0.6};
                    };
                    class BackInnerLeft {
                        offset[] = { -0.2, -2.0, -0.6};
                    };
                    class BackOuterLeft {
                        offset[] = { -0.65, -1.8, -0.6};
                    };
                };
            };
        };
        class rhs_zil131_flatbed_base {
            unloadPoint[] = {0, -3.4, -0.6};
            unloadActionPoint[] = {0, -2.6, -0.4};
            class Sheep_random_F {
                class Spaces {
                    class FrontOuterLeft {
                        offset[] = {-0.9, -0.5, -0.6};
                    };
                    class FrontInnerLeft {
                        offset[] = {-0.45, -0.65, -0.6};
                    };
                    class FrontMiddle {
                        offset[] = {0.0, -0.5, -0.6};
                    };
                    class FrontInnerRight {
                        offset[] = { 0.45, -0.65, -0.6};
                    };
                    class FrontOuterRight {
                        offset[] = { 0.9, -0.5, -0.6};
                    };
                    class CenterRight {
                        offset[] = { -0.1, -1.1, -0.6};
                        dir = 90;
                    };
                    class BackOuterRight {
                        offset[] = { 0.9, -1.5, -0.6};
                        dir = 180;
                    };
                    class BackInnerRight {
                        offset[] = { 0.45, -1.4, -0.6};
                        dir = 180;
                    };
                    class BackInnerLeft {
                        offset[] = { -0.45, -1.0, -0.6};
                        dir = 180;
                    };
                    class BackOuterLeft {
                        offset[] = { -0.9, -1.1, -0.6};
                        dir = 180;
                    };
                    class BackLeft {
                        offset[] = { -0.0, -2.4, -0.6};
                        dir = 270;
                    };
                };
            };
        };
        class Truck_02_transport_base_F { /*Zamak/Kamaz open with benches*/
            unloadPoint[] = {0, -4.3, -0.2};
            unloadActionPoint[] = {0, -3.6, -0.2};
            class Sheep_random_F {
                class Spaces {
                    class FrontCenter  {
                        offset[] = { 0.00, -0.50, -0.80};
                    };
                    class FrontRight  {
                        offset[] = { 0.50,  0.20, -0.80};
                        cargoIndices[] = {2, 4};
                    };
                    class FrontLeft {
                        offset[] = {-0.40,  0.20, -0.80};
                        cargoIndices[] = {3, 5};
                    };
                    class MiddleCenter  {
                        offset[] = { 0.00, -0.90, -0.80};
                        dir = 180;
                    };
                    class MiddleLeft  {
                        offset[] = {-0.45, -1.30, -0.80};
                        cargoIndices[] = {6, 8};
                    };
                    class MiddleRight  {
                        offset[] = { 0.45, -1.30, -0.80};
                        cargoIndices[] = {7, 9};
                    };
                    class BackLeft  {
                        offset[] = {-0.45, -1.70, -0.80};
                        dir = 180;
                        cargoIndices[] = {10, 12};
                    };
                    class DiagonalRight {
                        offset[] = { 0.00, -2.40, -0.80};
                        dir = 45;
                        cargoIndices[] = {11};
                    };
                    class DiagonalLeft {
                        offset[] = { 0.00, -2.80, -0.80};
                        dir = 225;
                        cargoIndices[] = {14};
                    };
                    class BackRight  {
                        offset[] = { 0.50, -2.40, -0.80};
                        dir = 180;
                        cargoIndices[] = {13, 15};
                    };
                };
            };
        };
        class Quadbike_01_base_F {
            unloadPoint[] = {0, -1.4, -0.2};
            unloadActionPoint[] = {0, -1.0, -0.3};
            class Sheep_random_F {
                class Spaces {
                    class BackSeat  {
                        /* legs sticking out behind: */
                        offset[] = {-0.4, -1.4, -0.3};
                        dir[] = {{1,0,0}, {0,1,0}};
                        /* alternative orientation, legs front: */
                        //    offset[] = {-0.3, -0.2, -0.3};
                        //    dir = {{1,0,0}, {0,-1,0}};
                        cargoIndices[] = {0};
                    };
                };
            };
        };

        class UK3CB_Hilux_Open {
            unloadPoint[] = {0, -3.3, -0.2};
            unloadActionPoint[] = {0, -2.4, -0.1};
            class Sheep_random_F {
                class Spaces {
                    class Front  {
                        offset[] = {-0.4, -0.4, -0.7};
                        dir = 90;
                        cargoIndices[] = {5};
                    };
                    class Center  {
                        offset[] = {-0.3, -0.7, -0.7};
                        dir = 135;
                        cargoIndices[] = {};
                    };
                    class Back {
                        offset[] = {0.4, -1.8, -0.7};
                        dir = 270;
                        cargoIndices[] = {3, 4};
                    };
                };
            };
        };
        class UK3CB_Datsun_Open: UK3CB_Hilux_Open {};

        // class UK3CB_UN_I_Ural_Open: RHS_Ural_Civ_Base {}; // TODO

        class UK3CB_V3S_Open {
            unloadPoint[] = {0, -4.1, -0.7};
            unloadActionPoint[] = {0, -3.3, -0.7};
            class Sheep_random_F {
                class Spaces {
                    class First {
                        offset[] = {-0.4, 0.5, -.7};
                        dir = 90;
                        cargoIndices[] = {9, 10}; //yes! frontmost seats are 9,10!
                    };
                    class Second {
                        offset[] = {0.4, 0, -.7};
                        dir = 270;
                        cargoIndices[] = {1, 2};
                    };
                    class Third {
                        offset[] = {-0.4, -0.5, -.7};
                        dir = 90;
                        cargoIndices[] = {1, 2};
                    };
                    class Fourth {
                        offset[] = {0.4, -1, -.7};
                        dir = 270;
                        cargoIndices[] = {3, 4};
                    };
                    class Fifth {
                        offset[] = {-0.4, -1.5, -.7};
                        dir = 90;
                        cargoIndices[] = {5, 6};
                    };
                    class Sixth {
                        offset[] = {0.4, -2, -.7};
                        dir = 270;
                        cargoIndices[] = {};
                    };
                    class Seventh {
                        offset[] = {-0.4, -2.5, -.7};
                        dir = 90;
                        cargoIndices[] = {7, 8};
                    };
                    class Eighth {
                        offset[] = {0.4, -3, -.7};
                        dir = 270;
                        cargoIndices[] = {11, 12};
                    };
                };
            };

        };

    class UK3CB_LandRover { /*note: base classes of the armed variants do have the armament in the class name*/
            unloadPoint[] = {0, -2.6, -0.7};
            unloadActionPoint[] = {0, -2.1, -0.3};
            class Sheep_Random_F {
                class Spaces {
                    class Front {
                        offset[] = {0.05, -0.8, -.7};
                        dir = -8;
                        cargoIndices[] = {2, 3, 4, 5};
                    };
                    class Back {
                        offset[] = {-0.05, -1.2, -.7};
                        dir = 172;
                        cargoIndices[] = {0, 1, 4, 5};
                    };
                };

            };
        };

        class UK3CB_S1203 {
            unloadPoint[] = {0, -2.0, -0.7};
            unloadActionPoint[] = {0, -1.6, -0.1};
            class Sheep_Random_F {
                class Spaces {
                    class Left {
                        offset[] = {-0.45, -0.2, -0.7};
                        dir = 180;
                        cargoIndices[] = {3};
                    };
                    class Center {
                        offset[] = {0, -0.2, -0.7};
                        dir = 180;
                        cargoIndices[] = {3, 4};
                    };
                    class Right {
                        offset[] = {0.45, -0.2, -0.7};
                        dir = 180;
                        cargoIndices[] = {4};
                    };
                };
            };
        };

        class UK3CB_S1203_Ambulance {
            unloadPoint[] = {0, -2.0, -0.7};
            unloadActionPoint[] = {0, -1.6, -0.1};
            class Sheep_Random_F {
                class Spaces {
                    class Left {
                        offset[] = {-0.2, -1, -0.35};
                        dir[] = {{0,1,0}, {1,0,0}};
                        cargoIndices[] = {2};
                    };
                    class Right {
                        offset[] = {0.2, -1, -0.35};
                        dir[] = {{0,1,0}, {-1,0,0}};
                        cargoIndices[] = {1};
                    };
                };
            };
        };

        class RHS_UAZ_Open_Base {
        // class UK3CB_UAZ_Open_Base {
            unloadPoint[] = {0, -2.2, 0};
            unloadActionPoint[] = {0, -1.6, 0};
            class Sheep_Random_F {
                class Spaces {
                    class Front {
                        offset[] = {-0.55, -0.2, -0.7};
                        dir = 90;
                        cargoIndices[] = {1, 3, 4};
                    };
                };
            };
        };


        class UK3CB_V3S_Recovery {
            unloadPoint[] = {0, -4.3, -0.6};
            unloadActionPoint[] = {0, -3.7, -0.3};
            class Sheep_Random_F {
                class Spaces {
                    class Left1 {
                        offset[] = { 0.55, 1.2, -.6 };
                        dir = 90;
                    };
                    class Right1 {
                        offset[] = {-0.55, 1.2, -.6 };
                        dir = 270;
                    };
                    class Left2 {
                        offset[] = { 0.55, 0.75, -.6 };
                        dir = 90;
                    };
                    class Right2 {
                        offset[] = {-0.55, 0.75, -.6 };
                        dir = 270;
                    };
                    class Left3 {
                        offset[] = { 0.55, 0.3, -.6 };
                        dir = 90;
                    };
                    class Right3 {
                        offset[] = {-0.55, 0.3, -.6 };
                        dir = 270;
                    };
                    class Left4 {
                        offset[] = { 0.55, -0.15, -.6 };
                        dir = 90;
                    };
                    class Right4 {
                        offset[] = {-0.55, -0.15, -.6 };
                        dir = 270;
                    };
                    class Left5 {
                        offset[] = { 0.55, -0.6, -.6 };
                        dir = 90;
                    };
                    class Right5 {
                        offset[] = {-0.55, -0.6, -.6 };
                        dir = 270;
                    };
                    class Left6 {
                        offset[] = { 0.55, -1.05, -.6 };
                        dir = 90;
                    };
                    class Right6 {
                        offset[] = {-0.55, -1.05, -.6 };
                        dir = 270;
                    };
                    class Left7 {
                        offset[] = { 0.55, -1.5, -.6 };
                        dir = 90;
                    };
                    class Right7 {
                        offset[] = {-0.55, -1.5, -.6 };
                        dir = 270;
                    };
                    class Left8 {
                        offset[] = { 0.55, -1.95, -.6 };
                        dir = 90;
                    };
                    class Right8 {
                        offset[] = {-0.55, -1.95, -.6 };
                        dir = 270;
                    };
                    class Left9 {
                        offset[] = { 0.55, -2.4, -.6 };
                        dir = 90;
                    };
                    class Right9 {
                        offset[] = {-0.55, -2.4, -.6 };
                        dir = 270;
                    };
                    class Left10 {
                        offset[] = { 0.55, -2.85, -.6 };
                        dir = 90;
                    };
                    class Right10 {
                        offset[] = {-0.55, -2.85, -.6 };
                        dir = 270;
                    };
                    class Left11 {
                        offset[] = { 0.55, -3.3, -.6 };
                        dir = 90;
                    };
                    class Right11 {
                        offset[] = {-0.55, -3.3, -.6 };
                        dir = 270;
                    };
                    class Center1 {
                        offset[] = { 0, 0.5, -.6 };
                        dir = 0;
                    };
                    class Center2 {
                        offset[] = { 0, -0.9, -.6 };
                        dir = 0;
                    };
                    class Center3 {
                        offset[] = { 0, -1.3, -.6 };
                        dir = 180;
                    };
                    class Center4 {
                        offset[] = { 0, -2.8, -.6 };
                        dir = 180;
                    };
                };
            };
        };
    };
};

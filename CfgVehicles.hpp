class CfgVehicles {
    class Animal_Base_F;
    class Sheep_random_F: Animal_Base_F {
        class GRAD_AnimalTransport {
            stop = "Sheep_Stop";
            default = "Sheep_Idle_Stop";
            actionPoint[] = {0, 0.35, 0.65};
        };
        ACE_dragging_canCarry = 1;
        ACE_dragging_carryPosition[] = {-0.5, 0.6, 0.5};
        ACE_dragging_carryDirection = 90;
    };

    class Van_01_base_F;
    class I_G_Van_01_transport_F: Van_01_base_F {
		class GRAD_AnimalTransport {
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
	};

    class RHS_Ural_Civ_Base;
    class rhsgref_ins_ural_work_open: RHS_Ural_Civ_Base {
		class GRAD_AnimalTransport {
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
    };
    class rhs_gaz66_vmf;
    class rhs_gaz66o_vmf: rhs_gaz66_vmf {
        class GRAD_AnimalTransport {
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
    };
    class rhs_zil131_open_base;
    class rhs_zil131_flatbed_base: rhs_zil131_open_base {
        class GRAD_AnimalTransport {
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
    };
};

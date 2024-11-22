struct Offsets {
    struct General {
        static constexpr size_t ChildSize = 0x8;
        static constexpr size_t Name = 0x68;
        static constexpr size_t Children = 0x70;
        static constexpr size_t Parent = 0x50;
        static constexpr size_t DisplayName = 0x108;
        static constexpr size_t LocalPlayer = 0x118;
        static constexpr size_t ModelInstance = 0x2A0;
        static constexpr size_t Primitive = 0x160;
        static constexpr size_t BasePartPosition = 0x140;
        static constexpr size_t ClientDimensions = 0x740;
        static constexpr size_t ViewMatrix = 0x4D0;
    };

    struct Descriptors {
        static constexpr size_t ClassDescriptor = 0x18;
    };

    struct Health {
        static constexpr size_t Health = 0x18C;
        static constexpr size_t MaxHealth = 0x1AC;
    };

    struct TeamAndGame {
        static constexpr size_t Team = 0x1D8;
        static constexpr size_t GameId = 0x168;
    };

    struct Physics {
        static constexpr size_t AssemblyLinearVelocity = 0x14C;
    };

    struct Camera {
        static constexpr size_t CameraPosition = 0xFC;
        static constexpr size_t CurrentCamera = 0x3D8;
        static constexpr size_t CameraRotation = 0xD8;
    };

    struct PlayerAttributes {
        static constexpr size_t JumpPower = 0x1A8;
        static constexpr size_t HipHeight = 0x198;
    };

    struct DataModel {
        static constexpr size_t FakeDataModelToRealDataModel = 0x1A8;
    };

    struct Input {
        static constexpr size_t MousePosition = 0xE4;
        static constexpr size_t InputObject = 0xF8;
    };

    struct Ignore {
        static constexpr size_t HumanoidInstance = 0x298;
        static constexpr size_t TextureId = 0x298;
        static constexpr size_t CFrameRotation = 0x11C;
    };
};

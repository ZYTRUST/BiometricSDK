// swift-tools-version: 5.8
import PackageDescription

let package = Package(
    name: "zyBiometricSDK",
    defaultLocalization: "es",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "zyBiometricSDK",
            targets: ["zyBiometricSDK"]
        )
    ],
    dependencies: [
        // Dependencias de otros paquetes
    ],
    targets: [
        .binaryTarget(
            name: "zyBiometricSDK",
            path: "zyBiometricSDK.xcframework"
        )
    ]
)

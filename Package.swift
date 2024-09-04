// swift-tools-version: 5.8
import PackageDescription

let package = Package(
    name: "zyBiometricSDK",
    defaultLocalization: "es",
    platforms: [
        .iOS(.v11)
    ],
    products: [
        .library(
            name: "BiometricSDK",
            targets: ["BiometricSDK"]
        )
    ],
    dependencies: [
        // Dependencias de otros paquetes
    ],
    targets: [
        .binaryTarget(
            name: "BiometricSDK",
            path: "BiometricSDK.xcframework"
        )
    ]
)

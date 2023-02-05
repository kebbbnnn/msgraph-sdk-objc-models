// swift-tools-version:5.3
import PackageDescription
let package = Package(
    name: "MSGraphClientModels",
    platforms: [
        .macOS(.v10_10),
        .iOS(.v9)
    ],
    products: [
        .library(
            name: "MSGraphClientModels",
            targets: ["MSGraphClientModels"]),
    ],
    targets: [
        .binaryTarget(name: "MSGraphClientModels", url: "https://github.com/kebbbnnn/msgraph-sdk-objc-models/releases/download/1.0.0-spm/MSGraphClientModels.xcframework.zip", checksum: "843ce5cd120bfd63b0bf7892d27d2162e7745a26c9c5a140c27257e5fdd0a93e") 
    ]
)

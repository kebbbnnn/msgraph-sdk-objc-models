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
        .binaryTarget(name: "MSGraphClientModels", url: "https://github.com/kebbbnnn/msgraph-sdk-objc-models/releases/download/1.0.0-spm/MSGraphClientModels.xcframework.zip", checksum: "0747a6ecef07cffcbf0f8811d3ebb5e00829435ee9de6f6369cdd7e6fd0dd9b8") 
    ]
)

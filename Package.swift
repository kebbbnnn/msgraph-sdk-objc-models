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
        .binaryTarget(name: "MSGraphClientModels", url: "https://github.com/kebbbnnn/msgraph-sdk-objc-models/releases/download/1.0.1-spm/MSGraphClientModels.xcframework.zip", checksum: "f7fb7357ff70a9e0bbe9c3e89c9405a2590276444aaa66205fa73d077fb1af3e") 
    ]
)

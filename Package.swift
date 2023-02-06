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
        .binaryTarget(name: "MSGraphClientModels", url: "https://github.com/kebbbnnn/msgraph-sdk-objc-models/releases/download/1.0.2-spm/MSGraphClientModels.xcframework.zip", checksum: "421f6ac137ca7f79a0e06842d30f75a663b6e81cc1698a656697da79aab1c076") 
    ]
)

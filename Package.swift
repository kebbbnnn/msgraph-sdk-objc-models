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
        .binaryTarget(name: "MSGraphClientModels", url: "https://github.com/kebbbnnn/msgraph-sdk-objc-models/releases/download/1.0.0-spm/MSGraphClientModels.xcframework.zip", checksum: "99f5c497fa284b22d0d3ce740cd5801757d01e5060ebe6881463311583303682") 
    ]
)

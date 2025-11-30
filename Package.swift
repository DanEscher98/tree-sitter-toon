// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterToon",
    products: [
        .library(name: "TreeSitterToon", targets: ["TreeSitterToon"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterToon",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterToonTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterToon",
            ],
            path: "bindings/swift/TreeSitterToonTests"
        )
    ],
    cLanguageStandard: .c11
)

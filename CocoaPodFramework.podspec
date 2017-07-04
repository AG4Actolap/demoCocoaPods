Pod::Spec.new do |s|
s.name           = "DemoTrackwickProject"
s.version        = "1.0"
s.summary        = "Demo Trackwick iOS SDK"
s.homepage       = "http://www.actolap.com"
s.license        = 'MIT License, Version 2.0'
s.author         = { "Ankit Gupta" => "ankit.gupta@actolap.com" }
s.platform       = :ios, '10.2'
s.source         = { :git => "https://github.com/AG4Actolap/demoCocoaPods.git", :tag => "{s.version}" }
s.frameworks     = "SystemConfiguration", "CoreLocation", "CoreMotion", "CoreTelephony", "CoreData"
s.libraries      = "t.1.0.0", "sqlite3", "objective c"

s.ios.vendored_frameworks = 'Trackwick.framework'
s.requires_arc = true
end

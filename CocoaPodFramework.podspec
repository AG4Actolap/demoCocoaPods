Pod::Spec.new do |s|
s.name           = "DemoTrackwickProject"
s.version        = "1.0.10"
s.summary        = "Demo Trackwick iOS SDK"
s.homepage       = "http://www.actolap.com"
s.license        = 'MIT License, Version 2.0'
s.author         = { "Ankit Gupta" => "ankit.gupta@actolap.com" }
s.platform       = :ios, '9.0'
s.source         = { :git => "https://github.com/AG4Actolap/demoCocoaPods.git", :tag => "{0.0.10}" }
s.frameworks     = "SystemConfiguration", "CoreLocation", "CoreMotion", "CoreTelephony", "CoreData"
s.libraries      = "sqlite3"

s.ios.vendored_frameworks = 'Trackwick.framework'
s.source_files     = "Trackwick.framework", "TrackwickResources.bundle"
s.resource = "TrackwickResources.bundle"
s.requires_arc = true
end

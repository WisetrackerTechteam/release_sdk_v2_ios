Pod::Spec.new do |s|


  s.name         = "DOT"
  s.version      = "0.1.8"
  s.summary      = "third party app tracking SDK"
  s.description  = <<-DESC
	Upload DOT which is third party app tracking SDK Framework
                   DESC
  s.homepage     = "http://www.wisetracker.co.kr"

  s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.author       = { 'Wisetracker' => 'tech@wisetracker.co.kr' }
  s.ios.deployment_target = '9.0'

  s.source       = { :git => "https://github.com/WisetrackerTechteam/release_sdk_v2_ios.git", :tag => s.version.to_s }
  s.ios.vendored_frameworks = 'DOT.framework'
 # s.source_files  = "DOT/**/*.{h,m}"

#  s.subspec 'CouchbaseLite' do |ss|
#    ss.source_files = 'CouchbaseLite.framework/Headers/*.h'
#    ss.public_header_files = 'CouchbaseLite.framework/Headers/*.h'
#    ss.frameworks = 'CFNetwork', 'Security', 'SystemConfiguration', 'JavaScriptCore'
#    ss.libraries = 'z', 'c++', 'sqlite3'
#    ss.vendored_frameworks = 'CouchbaseLite.framework'
#    ss.xcconfig = {
#      'OTHER_LDFLAGS' => '-ObjC'
#    }
#    ss.preserve_paths = 'CouchbaseLite.framework'
#  end
end

Pod::Spec.new do |s|
  s.name     = 'FXForms'
  s.version  = '1.1.6.6'
  s.license  = 'zlib'
  s.summary  = 'FXForms is an Objective-C library for easily creating table-based forms on iOS. It is ideal for settings pages or user data entry tasks.'
  s.homepage = 'https://github.com/nicklockwood/FXForms'
  s.authors  = 'Nick Lockwood'
  s.source       = { :git => "https://github.com/andrewkatz/FXForms.git", :tag => "1.1.6.5" }
  s.source_files = 'FXForms'
  s.requires_arc = true
  s.ios.deployment_target = '7.0'
  s.dependency 'Skywalker'
end

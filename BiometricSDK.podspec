Pod::Spec.new do |s|
  s.name         = "BiometricSDK"
  s.version      = "4.23.0"
  s.summary      = "The BiometricSDK library is targeted to developers who want to use already prepared UI controls for CR2D."
  s.description  = <<-DESC
          The BiometricSDKUIExtensions library is targeted to developers who want to use already prepared UI controls for CR2D.
                   DESC

  s.homepage     = "http://idemia.com"
  s.license      = { :type => "Copyright", :text => "Copyright by Idemia" }
  s.author       = "Idemia"
  s.platform     = :ios, "10.0"
  s.source       = { :git => "https://github.com/ZYTRUST/BiometricSDK.git", :tag => "4.23.0" }
  s.requires_arc = true
  s.vendored_frameworks = "BiometricSDK.framework"
end

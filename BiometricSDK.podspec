Pod::Spec.new do |s|
  s.name         = "BiometricSDK"
  s.version      = "4.34.1"
  s.summary      = "The BiometricSDK library is targeted to developers who want to use already prepared UI controls for CR2D."
  s.description  = <<-DESC
          The BiometricSDKUIExtensions library is targeted to developers who want to use already prepared UI controls for CR2D.
                   DESC

  s.homepage     = "http://idemia.com"
  s.license      = { :type => "Copyright", :text => "Copyright by Idemia" }
  s.author = { "ZYTRUST SA" => "ztmobile@zytrust.com" }
  s.platform     = :ios, "11.0"
  s.source       = { :git => "https://github.com/ZYTRUST/BiometricSDK.git", :tag => "4.34.1" }
  s.requires_arc = true
  s.vendored_frameworks = "BiometricSDK.framework"

  #s.pod_target_xcconfig = {
  #  'ONLY_ACTIVE_ARCH' => 'YES'
  #}

end

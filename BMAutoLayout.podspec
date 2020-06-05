Pod::Spec.new do |s|
  s.name          = "BMAutoLayout"
  s.version       = "1.0.0"
  s.summary       = "NSLayoutAnchor based Objective-C AutoLayout Lib"
  s.description   = <<-DESC
                         NSLayoutAnchor based Objective-C Layout Library
                   DESC
  s.homepage      = "https://github.com/ACommonChinese/BMAutoLayout"
  s.license       = "MIT"
  s.author        = {'刘威振' => 'liuxing8807@126.com'}
  s.platform      = :ios, "9.0"
  s.source        = { :git => "https://github.com/ACommonChinese/BMAutoLayout.git", :tag => "#{s.version}" }
  s.source_files  = "BMAutoLayout/BMAutoLayout/**/*.{h,m}"
  s.requires_arc  = true
end

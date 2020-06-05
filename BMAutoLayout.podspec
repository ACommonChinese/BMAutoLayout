Pod::Spec.new do |s|
  s.name          = "BMAutoLayout"
  s.version       = "1.0.0"
  s.summary       = "A short description of BMAutoLayout."
  s.description   = <<-DESC
                         NSLayoutAnchor based Objective-C Layout Library
                   DESC
  s.homepage      = "https://github.com/ACommonChinese/BMAutoLayout"
  s.screenshots   = "https://github.com/ACommonChinese/BMAutoLayout/blob/master/images/1.png"
  s.license       = "MIT"
  s.author        = {'刘威振' => 'liuxing8807@126.com'}
  s.platform      = :ios, "9.0"
  s.source        = { :git => "https://github.com/ACommonChinese/BMAutoLayout", :tag => "#{spec.version}" }
  s.source_files  = "BMAutoLayout/BMAutoLayout/**/*.{h,m}"
  s.requires_arc  = true
end

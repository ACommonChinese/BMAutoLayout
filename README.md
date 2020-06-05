# BMAutoLayout
由于 Masonry 的作者不再维护OC版本的自动布局库，而Apple早已从繁杂的布局接口更换为基于NSLayoutAnchor的布局，由于工作需求，于是我仿照Masonry写了一套和Masonry API相同的代码，其内部核心代码使用NSLayoutAnhcor布局, 本代码支持iOS9.0及其以上版本。    注意`safeAreaLayoutGuide`是`iOS11.0`之后推出， 因此代码如果用到了`safeAreaLayoutGuide`，要确保当前系统大于或等于`iOS 11.0`  

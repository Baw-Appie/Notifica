@interface SBIcon : NSObject
struct SBIconImageInfo {
   CGFloat width;
   CGFloat height;
   CGFloat field1;
   CGFloat field2;
};
-(UIImage *)getIconImage:(int)arg1 ;
-(UIImage *)iconImageWithInfo:(struct SBIconImageInfo)info;
@end

@interface SBIconModel : NSObject
-(SBIcon *)applicationIconForBundleIdentifier:(id)arg1 ;
@end

@interface SBIconViewMap : NSObject
@property (nonatomic,readonly) SBIconModel * iconModel;
@end

@interface SBIconController : UIViewController
+(id)sharedInstance;
-(SBIconViewMap *)homescreenIconViewMap;
-(SBIconModel *)model;
@end

@interface UIImage (Private)
+ (UIImage *)_applicationIconImageForBundleIdentifier:(NSString *)bundleIdentifier format:(int)format scale:(CGFloat)scale;
@end
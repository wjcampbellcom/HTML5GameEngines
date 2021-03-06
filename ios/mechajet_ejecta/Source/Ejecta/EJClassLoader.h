#import <Foundation/Foundation.h>
#import <JavaScriptCore/JavaScriptCore.h>

@class EJJavaScriptView;
@interface EJClassLoader : NSObject

+ (JSClassRef)getJSClass:(id)class;
+ (JSClassRef)createJSClass:(id)class;

- (id)initWithScriptView:(EJJavaScriptView *)scriptView name:(NSString *)name;

@end

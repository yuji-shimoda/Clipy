#import <Foundation/Foundation.h>
#import <dispatch/dispatch.h>

@interface NMBExceptionCapture : NSObject

- (nonnull instancetype)initWithHandler:(void(^ _Nullable)(NSException * _Nonnull))handler finally:(void(^ _Nullable)())finally;
- (void)tryBlock:(__attribute__((noescape)) void(^ _Nonnull)())unsafeBlock NS_SWIFT_NAME(tryBlock(_:));

@end

typedef void(^NMBSourceCallbackBlock)(BOOL successful);

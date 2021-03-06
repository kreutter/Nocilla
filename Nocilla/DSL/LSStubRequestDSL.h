#import <Foundation/Foundation.h>

@class LSStubRequestDSL;
@class LSStubResponseDSL;
@class LSStubRequest;

typedef LSStubRequestDSL *(^WithHeaderMethod)(NSString *, NSString *);
typedef LSStubRequestDSL *(^WithHeadersMethod)(NSDictionary *);
typedef LSStubRequestDSL *(^AndBodyMethod)(NSString *);
typedef LSStubResponseDSL *(^AndReturnMethod)(NSInteger);

@interface LSStubRequestDSL : NSObject
- (id)initWithRequest:(LSStubRequest *)request;
- (WithHeaderMethod)withHeader;
- (WithHeadersMethod)withHeaders;
- (AndBodyMethod)withBody;
- (AndReturnMethod)andReturn;
@end

#ifdef __cplusplus
extern "C" {
#endif
    
LSStubRequestDSL * stubRequest(NSString *method, NSString *url);
    
#ifdef __cplusplus
}
#endif

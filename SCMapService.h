/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCSessionRequestManager;

@interface SCMapService : NSObject {

	SCSessionRequestManager* _sessionRequestManager;

}
+(id)requestForRPCEndpoint:(id)arg1 message:(id)arg2 options:(id)arg3 ;
-(id)initWithSessionRequestManager:(id)arg1 ;
-(id)rpcEndpoint:(id)arg1 message:(id)arg2 options:(id)arg3 responseClass:(Class)arg4 callbackQueue:(id)arg5 callback:(/*^block*/id)arg6 ;
@end


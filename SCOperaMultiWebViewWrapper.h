/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:19 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SCOperaMultiWebViewWrapper : NSObject {

	NSMutableDictionary* _wrapperIdToWrapperMap;
	NSMutableDictionary* _initialLoadUrlToWrapperIdMap;
	NSMutableDictionary* _wrapperIdToInitialLoadUrlMap;
	NSMutableDictionary* _wrapperIdToDidFinishLoadingTimestampMap;

}
-(id)webViewWrapperForUrl:(id)arg1 ;
-(void)setWebViewWrapper:(id)arg1 forUrl:(id)arg2 ;
-(id)initialLoadUrlForWebViewWrapper:(id)arg1 ;
-(void)setDidFinishLoadingTimestamp:(id)arg1 forWebViewWrapper:(id)arg2 ;
-(id)didFinishLoadingTimestampForWebViewWrapper:(id)arg1 ;
-(id)init;
-(void)tearDown;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCPerforming;
@interface SCMediaRenderedLowResUpload : NSObject {

	id<SCPerforming> _performer;

}
+(id)sharedInstance;
-(void)resumeUploadRenderedLowresMediaWithURL:(id)arg1 snap:(id)arg2 renderedLowresMediaData:(id)arg3 networker:(id)arg4 logger:(id)arg5 additionalHTTPHeaders:(id)arg6 callbackQueue:(id)arg7 successBlock:(/*^block*/id)arg8 failureBlock:(/*^block*/id)arg9 ;
-(void)updateThumbnailForSnapId:(id)arg1 dataToUpload:(id)arg2 networker:(id)arg3 uploadLogger:(id)arg4 callbackQueue:(id)arg5 successBlock:(/*^block*/id)arg6 failureBlock:(/*^block*/id)arg7 ;
-(id)init;
@end


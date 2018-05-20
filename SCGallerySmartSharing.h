/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:36 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCUserSession;

@interface SCGallerySmartSharing : NSObject {

	SCUserSession* _userSession;

}
+(BOOL)isEligibleForSmartSharing:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 ;
-(BOOL)isEligibleForSmartSharingToChat:(id)arg1 ;
-(void)showSmartSharingToast;
-(void)smartUploadWithMediaId:(id)arg1 gallerySnap:(id)arg2 key:(id)arg3 IV:(id)arg4 destination:(id)arg5 orientation:(id)arg6 callbackQueue:(id)arg7 successBlock:(/*^block*/id)arg8 failureBlock:(/*^block*/id)arg9 ;
-(BOOL)isEligibleForSmartSharingToStory:(id)arg1 ;
-(void)trySmartSharingToChatWithGallerySnap:(id)arg1 renderableMedia:(id)arg2 callbackQueue:(id)arg3 successBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 ;
@end

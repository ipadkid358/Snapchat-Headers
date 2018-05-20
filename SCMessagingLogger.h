/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:39 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCMessagingLogger : NSObject
+(id)sharedInstance;
-(void)didTapToRetryWithCount:(int)arg1 context:(id)arg2 ;
-(void)didMediaStartUploadingWithMediaId:(id)arg1 mediaType:(long long)arg2 uploadMediaType:(unsigned long long)arg3 numBytes:(long long)arg4 ;
-(void)didMediaFinishUploadingWithMediaId:(id)arg1 success:(BOOL)arg2 usedUploadUrl:(id)arg3 ;
-(id)mediaTypeAsStringFromMediaType:(long long)arg1 ;
-(id)snapTypeStringFromMediaType:(unsigned long long)arg1 ;
-(void)didHitSendWithMediaStillUploading;
-(void)didMediaFinishEncryptingDataToUpload:(id)arg1 ;
-(void)snap:(id)arg1 didFailAndNotRecoverableWithReason:(unsigned long long)arg2 ;
@end


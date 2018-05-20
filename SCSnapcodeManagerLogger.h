/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:50 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SCSnapcodeManagerSessionCounter;

@interface SCSnapcodeManagerLogger : NSObject {

	NSString* _loggerSessionId;
	SCSnapcodeManagerSessionCounter* _snapcodeSessionCounter;

}
-(void)didPerformAction:(long long)arg1 success:(BOOL)arg2 ;
-(void)enterSearch;
-(void)exitSearch;
-(void)didEnterSnapcodeManager;
-(void)didEnterPage:(long long)arg1 snapcodeCount:(int)arg2 ghostImageCount:(int)arg3 ;
-(void)didExitImageEditWithType:(long long)arg1 snapcodeCount:(int)arg2 snapcodeWithImageCount:(int)arg3 webImageCount:(int)arg4 cameraImageCount:(int)arg5 selectedImageSize:(int)arg6 selectedWebImage:(BOOL)arg7 hasMovedImage:(BOOL)arg8 ;
-(void)didPreviewSnapcodeWithScannableId:(id)arg1 scanData:(id)arg2 snapcodeCount:(int)arg3 snapcodeWithImageCount:(int)arg4 ;
-(void)didShareSnapcodeWithScannableId:(id)arg1 scanData:(id)arg2 snapcodeCount:(int)arg3 snapcodeWithImageCount:(int)arg4 ;
-(void)didStartFetchSnapcodes;
-(void)didFinishFetchSnapcodes;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ANSUploaderDelegate <NSObject>
@optional
-(void)uploader:(id)arg1 session:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4;

@required
-(id)uploader:(id)arg1 filePathForUniqueName:(id)arg2;
-(void)uploader:(id)arg1 didFinishUploadWithUniqueName:(id)arg2 error:(id)arg3;
-(void)uploader:(id)arg1 completedRequest:(id)arg2 withResponse:(id)arg3 uniqueName:(id)arg4 error:(id)arg5 completionHandler:(/*^block*/id)arg6;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL;


@protocol ZZChannel
@property (nonatomic,readonly) NSURL * URL; 
@required
-(id)newInput:(out id*)arg1;
-(id)temporaryChannel:(out id*)arg1;
-(void)removeAsTemporary;
-(id)newOutput:(out id*)arg1;
-(BOOL)replaceWithChannel:(id)arg1 error:(out id*)arg2;
-(NSURL *)URL;

@end


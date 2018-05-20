/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOperaImageProvider.h>

@class NSMutableDictionary, SCBitmojiManager, NSString;

@interface SCStoriesOperaIconProvider : NSObject <SCOperaImageProvider> {

	NSMutableDictionary* _friendForUsername;
	SCBitmojiManager* _bitmojiManager;
	long long _failedBitmojiLoadCount;
	long long _attemptedBitmojiLoadCount;
	long long _successfulBitmojiLoadCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)getFailedBitmojiLoadCount;
-(long long)getAttemptedBitmojiLoadCount;
-(long long)getSuccessfulBitmojiLoadCount;
-(void)resetMetrics;
-(void)imageForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithBitmojiManager:(id)arg1 ;
-(void)_initializeFriendsDictIfNecessary;
-(id)_randomGhostImageForUserKey:(id)arg1 ;
@end


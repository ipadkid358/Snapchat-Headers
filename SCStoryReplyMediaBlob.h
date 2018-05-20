/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCMediaDownloadUnarchiver.h>

@class NSData, NSString;

@interface SCStoryReplyMediaBlob : NSObject <SCMediaDownloadUnarchiver> {

	BOOL _containsVideo;
	NSData* _mediaData;
	NSData* _overlayData;

}

@property (assign,nonatomic) BOOL containsVideo;                    //@synthesize containsVideo=_containsVideo - In the implementation block
@property (nonatomic,copy) NSData * mediaData;                      //@synthesize mediaData=_mediaData - In the implementation block
@property (nonatomic,copy) NSData * overlayData;                    //@synthesize overlayData=_overlayData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)overlayData;
-(void)setOverlayData:(NSData *)arg1 ;
-(BOOL)containsVideo;
-(void)unarchiveBlobFromData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unzipData:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)setContainsVideo:(BOOL)arg1 ;
-(NSData *)mediaData;
-(void)setMediaData:(NSData *)arg1 ;
@end

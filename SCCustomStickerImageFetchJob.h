/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, SOJUSticker;

@interface SCCustomStickerImageFetchJob : NSObject {

	NSMutableArray* _completionBlocks;
	SOJUSticker* _sojuSticker;

}

@property (nonatomic,readonly) SOJUSticker * sojuSticker;              //@synthesize sojuSticker=_sojuSticker - In the implementation block
-(SOJUSticker *)sojuSticker;
-(BOOL)isEqualToJob:(id)arg1 ;
-(id)initWithSticker:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)completeWithImage:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
@end

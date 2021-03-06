/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SCBitmojiAvatarViewModel, NSArray, SCStoryAvatarViewModel;

@interface SCAvatarViewModel : NSObject <NSCopying> {

	unsigned long long _subtype;
	SCBitmojiAvatarViewModel* _bitmoji_bitmojiAvatarViewModel;
	NSArray* _groupBitmoji_bitmojiAvatarViewModels;
	SCStoryAvatarViewModel* _story_storyAvatarViewModel;

}
+(id)bitmojiWithBitmojiAvatarViewModel:(id)arg1 ;
+(id)groupBitmojiWithBitmojiAvatarViewModels:(id)arg1 ;
+(id)storyWithStoryAvatarViewModel:(id)arg1 ;
-(id)internalInit;
-(void)matchBitmoji:(/*^block*/id)arg1 groupBitmoji:(/*^block*/id)arg2 story:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


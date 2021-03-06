/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:05 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCAUserTrackedEvent.h>
#import <Snapchat/MapSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface SCAStickerPickerSearch : SCAUserTrackedEvent <MapSerializable, NSCopying> {

	NSNumber* stickerBitmojiCount;
	NSNumber* stickerSnapchatCount;
	NSNumber* stickerEmojiCount;
	NSNumber* stickerResultCount;
	NSNumber* searchSequenceId;
	NSString* searchTerm;
	NSString* snapSessionId;
	NSString* stickerSessionId;

}
-(void)setSnapSessionId:(id)arg1 ;
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(id)getSnapSessionId;
-(long long)getStickerBitmojiCount;
-(void)setStickerBitmojiCount:(long long)arg1 ;
-(long long)getStickerSnapchatCount;
-(void)setStickerSnapchatCount:(long long)arg1 ;
-(long long)getStickerEmojiCount;
-(void)setStickerEmojiCount:(long long)arg1 ;
-(long long)getSearchSequenceId;
-(void)setSearchSequenceId:(long long)arg1 ;
-(id)getStickerSessionId;
-(void)setStickerSessionId:(id)arg1 ;
-(id)getSearchTerm;
-(long long)getStickerResultCount;
-(void)setStickerResultCount:(long long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSearchTerm:(id)arg1 ;
-(id)asDictionary;
@end


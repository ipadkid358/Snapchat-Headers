/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:03 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SCCheetahLongImpressionItem, NSDate;

@interface SCCheetahLongImpressionTrackingData : NSObject <NSCopying> {

	BOOL _hasVideoThumbnail;
	BOOL _tileAutoPlayed;
	SCCheetahLongImpressionItem* _longImpressionItem;
	NSDate* _startDate;
	long long _triggeringItemPlaylistOffset;

}

@property (nonatomic,copy,readonly) SCCheetahLongImpressionItem * longImpressionItem;              //@synthesize longImpressionItem=_longImpressionItem - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startDate;                                            //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) BOOL hasVideoThumbnail;                                             //@synthesize hasVideoThumbnail=_hasVideoThumbnail - In the implementation block
@property (nonatomic,readonly) BOOL tileAutoPlayed;                                                //@synthesize tileAutoPlayed=_tileAutoPlayed - In the implementation block
@property (nonatomic,readonly) long long triggeringItemPlaylistOffset;                             //@synthesize triggeringItemPlaylistOffset=_triggeringItemPlaylistOffset - In the implementation block
-(id)initWithLongImpressionItem:(id)arg1 startDate:(id)arg2 hasVideoThumbnail:(BOOL)arg3 tileAutoPlayed:(BOOL)arg4 triggeringItemPlaylistOffset:(long long)arg5 ;
-(SCCheetahLongImpressionItem *)longImpressionItem;
-(BOOL)hasVideoThumbnail;
-(BOOL)tileAutoPlayed;
-(long long)triggeringItemPlaylistOffset;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)startDate;
@end

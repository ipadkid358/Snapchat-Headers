/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:26 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCUsageHistorySticker;

@interface SCChatStickerScore : NSObject {

	SCUsageHistorySticker* _sticker;
	double _score;

}

@property (nonatomic,retain) SCUsageHistorySticker * sticker;              //@synthesize sticker=_sticker - In the implementation block
@property (assign,nonatomic) double score;                                 //@synthesize score=_score - In the implementation block
-(id)initWithSticker:(id)arg1 score:(double)arg2 ;
-(void)setScore:(double)arg1 ;
-(double)score;
-(void)setSticker:(SCUsageHistorySticker *)arg1 ;
-(SCUsageHistorySticker *)sticker;
@end


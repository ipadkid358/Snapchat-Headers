/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:29 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol SCChatMessageViewModel <NSObject>
@property (assign,nonatomic) BOOL topRightCornerIsRounded; 
@property (assign,nonatomic) BOOL bottomRightCornerIsRounded; 
@property (assign,nonatomic) BOOL bottomLeftCornerIsRounded; 
@property (assign,nonatomic) int headerIndex; 
@property (assign,nonatomic) double height; 
@property (nonatomic,readonly) double headerHorizontalMargin; 
@property (nonatomic,readonly) double dateHeaderHeight; 
@property (nonatomic,readonly) double topMargin; 
@property (assign,nonatomic) BOOL isFirstViewModel; 
@property (assign,nonatomic) BOOL isLastViewModel; 
@property (nonatomic,copy) NSString * chatCardMessageViewModelId; 
@property (assign,nonatomic) long long chatCardNumber; 
@property (assign,nonatomic) double chatCardHeight; 
@property (assign,nonatomic) long long chatCardSegmentIndex; 
@property (assign,nonatomic) long long chatCardTotalSegmentCount; 
@required
-(id)reusableCellIdentifier;
-(BOOL)shouldShowSenderHeader;
-(BOOL)shouldDisplayBelowFoldInChat;
-(BOOL)shouldShowDateHeader;
-(void)setHeaderIndex:(int)arg1;
-(void)setIsLastViewModel:(BOOL)arg1;
-(BOOL)shouldDisplayBelowFoldInChatForPreviewMode;
-(double)calculateHeight;
-(double)dateHeaderHeight;
-(double)headerHorizontalMargin;
-(BOOL)isFirstViewModel;
-(void)setIsFirstViewModel:(BOOL)arg1;
-(NSString *)chatCardMessageViewModelId;
-(void)setChatCardMessageViewModelId:(id)arg1;
-(long long)chatCardNumber;
-(void)setChatCardNumber:(long long)arg1;
-(double)chatCardHeight;
-(void)setChatCardHeight:(double)arg1;
-(long long)chatCardSegmentIndex;
-(void)setChatCardSegmentIndex:(long long)arg1;
-(long long)chatCardTotalSegmentCount;
-(void)setChatCardTotalSegmentCount:(long long)arg1;
-(int)headerIndex;
-(BOOL)needsExtraSpacingOnTop;
-(void)setBottomLeftCornerIsRounded:(BOOL)arg1;
-(void)setTopRightCornerIsRounded:(BOOL)arg1;
-(void)setBottomRightCornerIsRounded:(BOOL)arg1;
-(double)intervalFromPrevious;
-(void)refreshViewModel;
-(double)bodyTopMargin;
-(BOOL)shouldShowTimestamp;
-(BOOL)bottomLeftCornerIsRounded;
-(BOOL)topRightCornerIsRounded;
-(BOOL)bottomRightCornerIsRounded;
-(BOOL)isLastViewModel;
-(double)topMargin;
-(double)height;
-(void)setHeight:(double)arg1;

@end


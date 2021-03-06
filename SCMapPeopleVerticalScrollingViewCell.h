/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:41 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class SCMapPersonCarouselItemView, SCMapPerson;

@interface SCMapPeopleVerticalScrollingViewCell : UICollectionViewCell {

	SCMapPersonCarouselItemView* _personCarouselItemView;

}

@property (assign,nonatomic,__weak) id<SCMapPersonCarouselItemViewDelegate> delegate; 
@property (nonatomic,readonly) SCMapPerson * person; 
-(void)setMapPerson:(id)arg1 userSession:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCMapPersonCarouselItemViewDelegate>)arg1 ;
-(id<SCMapPersonCarouselItemViewDelegate>)delegate;
-(SCMapPerson *)person;
@end


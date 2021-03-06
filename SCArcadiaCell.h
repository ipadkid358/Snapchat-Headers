/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Snapchat/SCArcadiaDiscoveryCellProtocol.h>

@class SCLensCell, UIView, UIImageView, NSString;

@interface SCArcadiaCell : UICollectionViewCell <SCArcadiaDiscoveryCellProtocol> {

	SCLensCell* _lensCell;
	UIView* _newIndicatorView;
	UIImageView* _selectedIndicatorView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)lensIcon;
-(void)setLensStatus:(long long)arg1 ;
-(long long)lensStatus;
-(id)newIndicatorView;
-(id)selectedIndicatorView;
-(void)setLensDiscoveryCellInfo:(id)arg1 ;
-(void)fillViewWithLensIcon:(id)arg1 lensStatus:(long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)setIsSelected:(BOOL)arg1 ;
-(void)setIsNew:(BOOL)arg1 ;
@end


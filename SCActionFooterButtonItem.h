/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage, UIView, SCActionFooterButton;

@interface SCActionFooterButtonItem : NSObject {

	BOOL _viewLoaded;
	BOOL _selected;
	BOOL _badged;
	NSString* _title;
	UIImage* _image;
	long long _interfaceStyle;
	UIView* _view;
	SCActionFooterButton* _actionView;
	NSString* _imageName;
	/*^block*/id _actionHandler;

}

@property (nonatomic,retain) UIView * view;                                      //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) SCActionFooterButton * actionView;                  //@synthesize actionView=_actionView - In the implementation block
@property (nonatomic,copy) NSString * imageName;                                 //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) id actionHandler;                                     //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,readonly) UIImage * image;                                  //@synthesize image=_image - In the implementation block
@property (getter=isViewLoaded,nonatomic,readonly) BOOL viewLoaded;              //@synthesize viewLoaded=_viewLoaded - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                    //@synthesize selected=_selected - In the implementation block
@property (assign,getter=isBadged,nonatomic) BOOL badged;                        //@synthesize badged=_badged - In the implementation block
@property (nonatomic,readonly) double width; 
@property (assign,nonatomic) long long interfaceStyle;                           //@synthesize interfaceStyle=_interfaceStyle - In the implementation block
+(id)actionButtonItemWithImageName:(id)arg1 actionHandler:(/*^block*/id)arg2 ;
+(id)actionButtonItemWithTitle:(id)arg1 actionHandler:(/*^block*/id)arg2 ;
+(id)actionButtonItemWithCustomView:(id)arg1 actionHandler:(/*^block*/id)arg2 ;
-(long long)interfaceStyle;
-(void)setInterfaceStyle:(long long)arg1 ;
-(BOOL)isBadged;
-(void)setBadged:(BOOL)arg1 ;
-(id)initWithImageName:(id)arg1 title:(id)arg2 customView:(id)arg3 actionHandler:(/*^block*/id)arg4 ;
-(void)setActionView:(SCActionFooterButton *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(UIView *)view;
-(NSString *)title;
-(BOOL)isViewLoaded;
-(void)setView:(UIView *)arg1 ;
-(UIImage *)image;
-(double)width;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithCustomView:(id)arg1 ;
-(void)_viewTapped:(id)arg1 ;
-(void)performAction;
-(void)setImageName:(NSString *)arg1 ;
-(NSString *)imageName;
-(void)setActionHandler:(id)arg1 ;
-(id)actionHandler;
-(SCActionFooterButton *)actionView;
@end

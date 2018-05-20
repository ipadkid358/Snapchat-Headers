/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol SCShakeProjectViewDelegate;
@class UILabel, UIView, NSMutableDictionary, NSArray, NSMutableSet, NSDictionary, SCShakeSeparatorView, UITextField, UIScrollView, UITableView, NSString;

@interface SCShakeProjectViewProvider : NSObject <UICollectionViewDataSource, UITableViewDataSource, UITableViewDelegate> {

	UILabel* _tapToSelectLabel;
	UILabel* _projectLabel;
	UILabel* _subProjectTapToSelectLabel;
	UILabel* _subProjectLabel;
	UIView* _subProjectContentView;
	UIView* _optionsContentView;
	NSMutableDictionary* _buttonsByProject;
	NSArray* _availableOptions;
	NSMutableSet* _selectedOptions;
	NSDictionary* _projectNameToSubprojectNames;
	NSDictionary* _projectNameToWarnings;
	id<SCShakeProjectViewDelegate> _delegate;
	SCShakeSeparatorView* _featureTeamSeparator;
	SCShakeSeparatorView* _subFeatureTeamSeparator;
	SCShakeSeparatorView* _featureWarningSeparator;
	SCShakeSeparatorView* _optionsSeparator;
	SCShakeSeparatorView* _emailSeparator;
	UIView* _emailTextFieldContainer;
	UITextField* _emailTextField;
	UIView* _tapToSelectContainer;
	UIView* _subProjectTapToSelectContainer;
	UIScrollView* _projectsScrollView;
	UIScrollView* _subProjectsScrollView;
	UIView* _featureWarningContainer;
	UILabel* _featureWarningLabel;
	UITableView* _featuresTableView;
	UIScrollView* _optionsScrollView;

}

@property (assign,nonatomic,__weak) id<SCShakeProjectViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SCShakeSeparatorView * featureTeamSeparator;                 //@synthesize featureTeamSeparator=_featureTeamSeparator - In the implementation block
@property (nonatomic,retain) SCShakeSeparatorView * subFeatureTeamSeparator;              //@synthesize subFeatureTeamSeparator=_subFeatureTeamSeparator - In the implementation block
@property (nonatomic,retain) SCShakeSeparatorView * featureWarningSeparator;              //@synthesize featureWarningSeparator=_featureWarningSeparator - In the implementation block
@property (nonatomic,retain) SCShakeSeparatorView * optionsSeparator;                     //@synthesize optionsSeparator=_optionsSeparator - In the implementation block
@property (nonatomic,retain) SCShakeSeparatorView * emailSeparator;                       //@synthesize emailSeparator=_emailSeparator - In the implementation block
@property (nonatomic,retain) UIView * emailTextFieldContainer;                            //@synthesize emailTextFieldContainer=_emailTextFieldContainer - In the implementation block
@property (nonatomic,retain) UITextField * emailTextField;                                //@synthesize emailTextField=_emailTextField - In the implementation block
@property (nonatomic,retain) UIView * tapToSelectContainer;                               //@synthesize tapToSelectContainer=_tapToSelectContainer - In the implementation block
@property (nonatomic,retain) UIView * subProjectTapToSelectContainer;                     //@synthesize subProjectTapToSelectContainer=_subProjectTapToSelectContainer - In the implementation block
@property (nonatomic,retain) UIScrollView * projectsScrollView;                           //@synthesize projectsScrollView=_projectsScrollView - In the implementation block
@property (nonatomic,retain) UIScrollView * subProjectsScrollView;                        //@synthesize subProjectsScrollView=_subProjectsScrollView - In the implementation block
@property (nonatomic,retain) UIView * featureWarningContainer;                            //@synthesize featureWarningContainer=_featureWarningContainer - In the implementation block
@property (nonatomic,retain) UILabel * featureWarningLabel;                               //@synthesize featureWarningLabel=_featureWarningLabel - In the implementation block
@property (nonatomic,retain) UITableView * featuresTableView;                             //@synthesize featuresTableView=_featuresTableView - In the implementation block
@property (nonatomic,retain) UIScrollView * optionsScrollView;                            //@synthesize optionsScrollView=_optionsScrollView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCShakeSeparatorView *)featureTeamSeparator;
-(void)setupTapToSelect:(id)arg1 projectText:(id)arg2 ;
-(UIView *)tapToSelectContainer;
-(void)setupSelectFeature;
-(UITableView *)featuresTableView;
-(void)setProjectLabelName:(id)arg1 ;
-(id)getFeatureByIndex:(long long)arg1 ;
-(void)setFeatureLabelNameWithIndex:(long long)arg1 ;
-(void)setFeatureTeamSeparator:(SCShakeSeparatorView *)arg1 ;
-(void)_initProjectNameToSubprojects;
-(void)_initProjectNameToWarnings;
-(void)setTapToSelectContainer:(UIView *)arg1 ;
-(void)_tapToSelectSingleTap:(id)arg1 ;
-(UIScrollView *)projectsScrollView;
-(void)setProjectsScrollView:(UIScrollView *)arg1 ;
-(void)_populateProjectsScrollView;
-(UIView *)subProjectTapToSelectContainer;
-(void)setSubProjectTapToSelectContainer:(UIView *)arg1 ;
-(void)_subProjectTapToSelectSingleTap:(id)arg1 ;
-(SCShakeSeparatorView *)subFeatureTeamSeparator;
-(UIScrollView *)subProjectsScrollView;
-(void)setSubFeatureTeamSeparator:(SCShakeSeparatorView *)arg1 ;
-(void)setSubProjectsScrollView:(UIScrollView *)arg1 ;
-(void)setFeaturesTableView:(UITableView *)arg1 ;
-(SCShakeSeparatorView *)featureWarningSeparator;
-(UIView *)featureWarningContainer;
-(UILabel *)featureWarningLabel;
-(void)setFeatureWarningSeparator:(SCShakeSeparatorView *)arg1 ;
-(void)setFeatureWarningContainer:(UIView *)arg1 ;
-(void)setFeatureWarningLabel:(UILabel *)arg1 ;
-(SCShakeSeparatorView *)optionsSeparator;
-(UIScrollView *)optionsScrollView;
-(void)setOptionsSeparator:(SCShakeSeparatorView *)arg1 ;
-(void)setOptionsScrollView:(UIScrollView *)arg1 ;
-(id)_getOptionDisplayName:(long long)arg1 ;
-(void)_toggleNonexclusiveOption:(id)arg1 ;
-(id)_createButtonWithLabel:(id)arg1 withState:(long long)arg2 previousButton:(id)arg3 forContainer:(id)arg4 withAction:(SEL)arg5 isVertical:(BOOL)arg6 ;
-(UIView *)emailTextFieldContainer;
-(SCShakeSeparatorView *)emailSeparator;
-(void)setEmailSeparator:(SCShakeSeparatorView *)arg1 ;
-(void)setEmailTextFieldContainer:(UIView *)arg1 ;
-(void)setEmailTextField:(UITextField *)arg1 ;
-(id)_getUserEmail;
-(id)_featureNames;
-(id)getSelectedProject;
-(void)_reloadSubProjectTeamView;
-(void)_reloadProjectWarningView;
-(id)getSelectedSubProject;
-(void)_selectSubproject:(id)arg1 ;
-(id)_projectNames;
-(void)_selectProject:(id)arg1 ;
-(void)_setButtonState:(id)arg1 withState:(long long)arg2 ;
-(void)setupSelectProjectTeam;
-(void)setupSubProjectTapToSelect;
-(void)setupSelectSubProjectTeam;
-(void)setupProjectWarning;
-(void)setupOptionsView;
-(void)setupSendToEmail;
-(void)setSubProjectLabelName:(id)arg1 ;
-(id)getSelectedOptions;
-(void)showProjectTeamView:(BOOL)arg1 ;
-(id)init;
-(void)setDelegate:(id<SCShakeProjectViewDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<SCShakeProjectViewDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)_textFieldDidChange:(id)arg1 ;
-(UITextField *)emailTextField;
@end
